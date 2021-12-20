#pragma once
#include "iWeapon.h"
class cWeapon : public iWeapon {
	cWeapon();
	virtual ~cWeapon();
	virtual void shoot(glm::vec2 dir) = 0;
private:
	float damage;
	bool isReloading;

};
