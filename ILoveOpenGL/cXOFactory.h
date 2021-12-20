#pragma once

#include "iGameObject.h"
#include <string>

class cXOFactory {

public:
	cXOFactory();
	~cXOFactory();

	iGameObject* makeObject(std::string context);
	static cXOFactory* getXOFactory();

private:
	static cXOFactory* XOFactory;

};