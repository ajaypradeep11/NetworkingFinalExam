#include "cXOPlayer.h"

cXOPlayer::cXOPlayer() {
	this->meshObject = NULL;
	this->isTurn = false;
	this->isTurn = true;
}
cXOPlayer::~cXOPlayer() {
	this->meshObject = NULL;
}
void cXOPlayer::Update(double deltaTime) {


	return;
}

std::string cXOPlayer::getName(void) {
	return this->name;
}
cMesh* cXOPlayer::getMeshPointer(void) {
	return this->meshObject;
}
