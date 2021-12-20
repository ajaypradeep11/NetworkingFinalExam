#define WIN32_LEAN_AND_MEAN			

#include <Windows.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <map>
#include <vector>
#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_BUFLEN 32
#define DEFAULT_PORT "27016"

#include "GameClientReq.pb.h"
#include "MessageEncapsule.pb.h"

enum CreateAccountWebResult
{
	PLAYER1,
	PLAYER2
};

// Client structure
struct ClientInfo {
	SOCKET socket;
	WSABUF dataBuf;
	char buffer[DEFAULT_BUFLEN];
	int bytesRECV;
	std::string group;
	std::string name;
	std::string toJoin;
	std::string toLeave;
	std::string Message;
};

int TotalClients = 0;
ClientInfo* ClientArray[FD_SETSIZE];

std::map<std::string, std::vector<SOCKET>> chatRooms;
std::vector<SOCKET> socketVector;

std::vector<SOCKET> socketVectorCheck;
protoAuth::GameClientReq* gameClient = new protoAuth::GameClientReq();
protoAuth::MessageEncapsule* messageEncapsule = new protoAuth::MessageEncapsule();

void RemoveClient(int index)
{
	ClientInfo* client = ClientArray[index];
	closesocket(client->socket);
	printf("Closing socket %d\n", (int)client->socket);

	for (int clientIndex = index; clientIndex < TotalClients; clientIndex++)
	{
		ClientArray[clientIndex] = ClientArray[clientIndex + 1];
	}

	TotalClients--;

}

int main(int argc, char** argv)
{
	std::map<std::string, std::vector<SOCKET>>::iterator it;
	std::vector<SOCKET>::iterator socketIterator;
	chatRooms.insert(std::pair<std::string, std::vector<SOCKET>>("Graphics", socketVector));
	chatRooms.insert(std::pair<std::string, std::vector<SOCKET>>("Networking", socketVector));
	chatRooms.insert(std::pair<std::string, std::vector<SOCKET>>("Physics", socketVector));
	chatRooms.insert(std::pair<std::string, std::vector<SOCKET>>("Gamepattern", socketVector));
	chatRooms.insert(std::pair<std::string, std::vector<SOCKET>>("MediaFun", socketVector));

	WSADATA wsaData;
	int iResult;
	WSABUF charac;

	iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0)
	{
		printf("WSAStartup failed with error: %d\n", iResult);
		return 1;
	}
	else
	{
		printf("WSAStartup() was successful!\n");
	}

	SOCKET listenSocket = INVALID_SOCKET;
	SOCKET acceptSocket = INVALID_SOCKET;

	struct addrinfo* addrResult = NULL;
	struct addrinfo hints;

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;

	iResult = getaddrinfo(NULL, DEFAULT_PORT, &hints, &addrResult);
	if (iResult != 0)
	{
		printf("getaddrinfo() failed with error %d\n", iResult);
		WSACleanup();
		return 1;
	}
	else
	{
		printf("getaddrinfo() is good!\n");
	}

	listenSocket = socket(
		addrResult->ai_family,
		addrResult->ai_socktype,
		addrResult->ai_protocol
	);
	if (listenSocket == INVALID_SOCKET)
	{
		printf("socket() failed with error %d\n", WSAGetLastError());
		freeaddrinfo(addrResult);
		WSACleanup();
		return 1;
	}
	else
	{
		printf("socket() is created!\n");
	}

	iResult = bind(
		listenSocket,
		addrResult->ai_addr,
		(int)addrResult->ai_addrlen
	);
	if (iResult == SOCKET_ERROR)
	{
		printf("bind failed with error: %d\n", WSAGetLastError());
		freeaddrinfo(addrResult);
		closesocket(listenSocket);
		WSACleanup();
		return 1;
	}
	else
	{
		printf("bind() is good!\n");
	}

	iResult = listen(listenSocket, SOMAXCONN);
	if (iResult == SOCKET_ERROR)
	{
		printf("listen() failed with error %d\n", WSAGetLastError());
		closesocket(listenSocket);
		WSACleanup();
		return 1;
	}
	else
	{
		printf("listen() was successful!\n");
	}
	DWORD NonBlock = 1;
	iResult = ioctlsocket(listenSocket, FIONBIO, &NonBlock);
	if (iResult == SOCKET_ERROR)
	{
		printf("ioctlsocket() failed with error %d\n", WSAGetLastError());
		closesocket(listenSocket);
		WSACleanup();
		return 1;
	}
	printf("ioctlsocket() was successful!\n");

	FD_SET ReadSet;
	int total;
	DWORD flags;
	DWORD RecvBytes;
	DWORD SentBytes;

	printf("Entering accept/recv/send loop...\n");
	while (true)
	{
		timeval tv = { 0 };
		tv.tv_sec = 2;
		FD_ZERO(&ReadSet);
		FD_SET(listenSocket, &ReadSet);
		for (int i = 0; i < TotalClients; i++)
		{
			FD_SET(ClientArray[i]->socket, &ReadSet);
		}

		printf("Waiting for select()...\n");
		total = select(0, &ReadSet, NULL, NULL, &tv);
		if (total == SOCKET_ERROR)
		{
			printf("select() failed with error: %d\n", WSAGetLastError());
			return 1;
		}
		else
		{
			printf("select() is successful!\n");
		}

		//Receive and Send
		if (FD_ISSET(listenSocket, &ReadSet))
		{
			total--;
			acceptSocket = accept(listenSocket, NULL, NULL);

			if (acceptSocket == INVALID_SOCKET)
			{
				printf("accept() failed with error %d\n", WSAGetLastError());
				return 1;
			}
			else
			{
				
				iResult = ioctlsocket(acceptSocket, FIONBIO, &NonBlock);
				if (iResult == SOCKET_ERROR)
				{
					printf("ioctsocket() failed with error %d\n", WSAGetLastError());
				}
				else
				{
					printf("ioctlsocket() success!\n");

					ClientInfo* info = new ClientInfo();
					info->socket = acceptSocket;
					info->bytesRECV = 0;
					ClientArray[TotalClients] = info;
					TotalClients++;
					socketVectorCheck.push_back(acceptSocket);
					printf("New client connected on socket %d\n", (int)acceptSocket);
				}
			}
		}

		for (int i = 0; i < TotalClients; i++)
		{
			ClientInfo* client = ClientArray[i];
			if (FD_ISSET(client->socket, &ReadSet))
			{
				total--;
				client->dataBuf.buf = client->buffer;
				client->dataBuf.len = DEFAULT_BUFLEN;
				charac.buf = client->buffer;
				DWORD Flags = 0;

				iResult = WSARecv(
					client->socket,
					&(client->dataBuf),
					1,
					&RecvBytes,
					&Flags,
					NULL,
					NULL
				);


				messageEncapsule->ParseFromString(client->dataBuf.buf);
				if (socketVectorCheck.size() == 2) {
					if (messageEncapsule->type() == messageEncapsule->PLAYER1) {
						gameClient->ParseFromString(messageEncapsule->data());
						gameClient->set_id(gameClient->PLAYER1TURN);
						std::string encap;
						gameClient->SerializeToString(&encap);
						std::string encapClient;
						messageEncapsule->set_data(encap);
						messageEncapsule->SerializeToString(&encapClient);
						send(socketVectorCheck.at(1), encapClient.c_str(), 32, 0);
					}
					else if (messageEncapsule->type() == messageEncapsule->PLAYER2) {
						gameClient->ParseFromString(messageEncapsule->data());
						gameClient->set_id(gameClient->PLAYER2TURN);
						std::string encap;
						gameClient->SerializeToString(&encap);
						std::string encapClient;
						messageEncapsule->set_data(encap);
						messageEncapsule->SerializeToString(&encapClient);
						send(socketVectorCheck.at(1), encapClient.c_str(), 32, 0);
					}
				}
				
			

				if (iResult == SOCKET_ERROR)
				{
					if (WSAGetLastError() == WSAEWOULDBLOCK)
					{
						// We can ignore this, it isn't an actual error.
					}
					else
					{
						printf("WSARecv failed on socket %d with error: %d\n", (int)client->socket, WSAGetLastError());
						RemoveClient(i);
					}
				}
				else
				{
					printf("WSARecv() is OK!\n");
					if (RecvBytes == 0)
					{
						RemoveClient(i);
					}
					else if (WSAGetLastError() == 10054) {

					}
					else if (RecvBytes == SOCKET_ERROR)
					{
						printf("recv: There was an error..%d\n", WSAGetLastError());
						continue;
					}
					else
					{


					}
				}
			}
		}

	}



	// #6 close
	iResult = shutdown(acceptSocket, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		printf("shutdown failed with error: %d\n", WSAGetLastError());
		closesocket(acceptSocket);
		WSACleanup();
		return 1;
	}

	// cleanup
	closesocket(acceptSocket);
	WSACleanup();

	return 0;
}