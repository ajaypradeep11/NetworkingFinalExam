#pragma once
#include "iGameObject.h"
#include "cMesh.h"
#include "iWeapon.h"

class cXOPlayer : public iGameObject {

public:
	cXOPlayer();
	virtual ~cXOPlayer();
	virtual void Update(double deltaTime);
	virtual std::string getName(void);
	virtual cMesh* getMeshPointer(void);

	std::string name;
	cMesh* meshObject;
	bool isWon;
	bool isTurn;
	iWeapon* Weapon;

};
