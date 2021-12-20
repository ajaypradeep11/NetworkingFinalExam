#pragma once
#include "cParticle.h"

namespace nPhysics
{
	class iForceGenerator
	{
	public:
		virtual ~iForceGenerator() {}
		virtual void Update(cParticle* particle, float deltaTime) = 0;
	};
}