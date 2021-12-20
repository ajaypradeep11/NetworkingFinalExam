#pragma once
#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include<vector>

class iWeapon {

	iWeapon();
	virtual ~iWeapon();
	virtual void shoot(glm::vec2 dir) = 0;
	virtual void Update(double deltaTime) = 0;
};

