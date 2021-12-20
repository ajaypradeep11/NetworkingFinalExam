
#include "cXOFactory.h"

#include "cXOPlayer.h"


cXOFactory::cXOFactory() {}
cXOFactory::~cXOFactory() {}
cXOFactory* cXOFactory::XOFactory = NULL;

cXOFactory* cXOFactory::getXOFactory() {

	if (cXOFactory::XOFactory == NULL) {

		cXOFactory::XOFactory = new cXOFactory();
	}
	return XOFactory;
}

iGameObject* cXOFactory::makeObject(std::string context) {

	if (context == "player") 
	{
		
	
		
	}
	if (context == "base") {

		

	}
	if (context == "weapon") {

	}
	return NULL;
}