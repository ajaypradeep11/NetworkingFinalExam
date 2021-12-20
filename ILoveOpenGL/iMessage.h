#pragma once

// This is the message interface for the mediator and 
//	is also used for the factories, etc. 



#include <string>
#include <vector>
#include <glm/vec4.hpp>

struct sMessage
{
public:
	sMessage() {};
	std::string command;
	std::vector< std::string > vec_sData;
	std::vector< glm::vec4 > vec_fData;
};


class iMessage
{
public:
	// Make a virtual destructor for anything with virtual
	virtual ~iMessage() { }

	// Asyncronous (don't return)
	virtual bool RecieveMessage(sMessage theMessage) = 0;
	virtual bool SetReciever(iMessage* pTheReciever) = 0;

	// Syncronous (do return with something)
	virtual bool RecieveMessage(sMessage theMessage, sMessage& messageReply) = 0;

};