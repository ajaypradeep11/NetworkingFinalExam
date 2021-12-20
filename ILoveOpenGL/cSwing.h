#pragma once
#include "cParticle.h"
#include "cParticleConstraint.h"
#include "cParticleWorld.h"

class cEntity
{
public:
	virtual ~cEntity() {}
	virtual void Update() {}
	virtual void Render() {};
};

class cSwing : public cEntity
{
protected:
	union
	{
		struct
		{
			nPhysics::cParticle* mParticleA;
			nPhysics::cParticle* mParticleB;
			nPhysics::cParticle* mParticleC;
			nPhysics::cParticle* mParticleD;
			nPhysics::cParticle* mParticleE;
			nPhysics::cParticle* mParticleF;

		};
		//nPhysics::cParticle* mParticles[2];
	};


	union
	{
		struct
		{
			nPhysics::cParticleRodConstraint* mConstraintAB;
			nPhysics::cParticleRodConstraint* mConstraintCD;
			nPhysics::cParticleRodConstraint* mConstraintEF;
		};
		//nPhysics::cParticleRodConstraint* mConstraints[6];
	};
public:
	cSwing();
	virtual ~cSwing();

	void AddToWorld(nPhysics::cParticleWorld* world);
	void RemoveFromWorld(nPhysics::cParticleWorld* world);

	virtual void Update();
	virtual void Render();
};