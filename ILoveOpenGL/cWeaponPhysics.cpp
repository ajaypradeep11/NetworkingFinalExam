#include "cWeaponPhysics.h"


namespace nPhysics
{
	cWeaponPhysics::cWeaponPhysics(const sProjectileDef& def)
		: cParticle(def.Mass, def.Position)
		, mRadius(def.Radius)
		, mColour(def.Colour)
		, mGroundHeight(def.GroundHeight)
		, mEnergyAcceleration(def.EnergyAcceleration)
	{
		SetVelocity(def.Speed * glm::normalize(def.Direction));
		SetAcceleration(def.Acceleration);
		SetDamping(def.Damping);

	}
	cWeaponPhysics::~cWeaponPhysics()
	{

	}

	float cWeaponPhysics::GetRadius()
	{
		return mRadius;
	}
	const glm::vec4& cWeaponPhysics::GetColour()
	{
		return mColour;
	}

	void cWeaponPhysics::Integrate(float deltaTime)
	{
		if (!GetIsAlive())
		{
			return;
		}
		ApplyForce(glm::normalize(GetVelocity()) * mEnergyAcceleration * GetMass());
		cParticle::Integrate(deltaTime);
		if (GetPosition().y < mGroundHeight + mRadius)
		{
			SetIsAlive(false);

		}
		/*if (GetPosition().x < mGroundHeight + mRadius)
		{
			SetIsAlive(false);
		}*/
	}
}