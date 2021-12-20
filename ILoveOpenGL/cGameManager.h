#pragma once
#include "cXOFactory.h"
#include "cWeapon.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

class cGameManager {
public:
	cGameManager();
	~cGameManager();

	void movements();
	std::vector<cXOFactory>* objects;
	

private:
	std::vector<std::string > map;
};
