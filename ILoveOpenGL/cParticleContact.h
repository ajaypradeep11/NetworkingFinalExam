#pragma once
#include "cParticle.h"

namespace nPhysics
{
	class cParticleContact
	{
	public:
		cParticle* mParticle0;
		cParticle* mParticle1;
		float mRestitution;
		glm::vec3 mContactNormal;
		float mPenetration;

		glm::vec3 mMovement0;
		glm::vec3 mMovement1;

		void Resolve(float deltaTime);
		float CalculateSeparatingVelocity() const;
		void ResolveVelocity(float deltaTime);
		void ResolvePosition(float deltaTime);
	};
}