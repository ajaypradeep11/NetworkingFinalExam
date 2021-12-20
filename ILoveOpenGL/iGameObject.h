#pragma once
#include<string>
#include "cMesh.h"

class iGameObject {
public:
	iGameObject() {}
	virtual ~iGameObject() {}
	virtual void Update(double deltaTime) = 0;
	
	virtual cMesh* getMeshPointer(void) = 0;
	virtual std::vector<cMesh*> getMeshPointers(void) = 0;
	
	virtual std::string getName(void) = 0;

};