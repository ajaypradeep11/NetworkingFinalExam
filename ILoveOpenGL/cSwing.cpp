#include "cSwing.h"
#include "globalThings.h"

cSwing::cSwing()
{
	glm::vec3 newpositionB7 = g_tictactow_meshX[0][0]->positionXYZ;
	glm::vec3 newpositionA7 = g_tictactow_meshX[0][0]->positionXYZ;
	newpositionA7.y += 250;

	glm::vec3 newpositionB8 = g_tictactow_meshX[0][1]->positionXYZ;
	glm::vec3 newpositionA8 = g_tictactow_meshX[0][1]->positionXYZ;
	newpositionA8.y += 250;

	glm::vec3 newpositionB9 = g_tictactow_meshX[0][2]->positionXYZ;
	glm::vec3 newpositionA9 = g_tictactow_meshX[0][2]->positionXYZ;
	newpositionA9.y += 250;

	
	mParticleA = new nPhysics::cParticle(-2.0f, newpositionA7);
	mParticleA->SetAcceleration(glm::vec3(0.0f, -9.8f, 0.0f));
	mParticleB = new nPhysics::cParticle(1.0f, newpositionB7);
	mParticleB->SetAcceleration(glm::vec3(0.0f, -9.8f, 0.0f));
	mConstraintAB = new nPhysics::cParticleRodConstraint(mParticleA, mParticleB);


	mParticleC = new nPhysics::cParticle(-2.0f, newpositionA8);
	mParticleC->SetAcceleration(glm::vec3(0.0f, -9.8f, 0.0f));
	mParticleD = new nPhysics::cParticle(1.0f, newpositionB8);
	mParticleD->SetAcceleration(glm::vec3(0.0f, -9.8f, 0.0f));
	mConstraintCD = new nPhysics::cParticleRodConstraint(mParticleC, mParticleD);

	mParticleE = new nPhysics::cParticle(-2.0f, newpositionA9);
	mParticleE->SetAcceleration(glm::vec3(0.0f, -9.8f, 0.0f));
	mParticleF = new nPhysics::cParticle(1.0f, newpositionB9);
	mParticleF->SetAcceleration(glm::vec3(0.0f, -9.8f, 0.0f));
	mConstraintEF = new nPhysics::cParticleRodConstraint(mParticleE, mParticleF);

}
cSwing::~cSwing()
{
		delete mParticleA;
		delete mParticleB;
		delete mParticleC;
		delete mParticleD;
		delete mParticleE;
		delete mParticleF;
		delete mConstraintAB;
}

void cSwing::AddToWorld(nPhysics::cParticleWorld* world)
{
	world->AddParticle(mParticleA);
	world->AddParticle(mParticleB);
	world->AddParticle(mParticleC);
	world->AddParticle(mParticleD);
	world->AddParticle(mParticleE);
	world->AddParticle(mParticleF);

	world->AddContactContactGenerator(mConstraintAB);

}
void cSwing::RemoveFromWorld(nPhysics::cParticleWorld* world)
{
	world->RemoveParticle(mParticleA);
	world->RemoveParticle(mParticleB);
	world->RemoveParticle(mParticleC);
	world->RemoveParticle(mParticleD);
	world->RemoveParticle(mParticleE);
	world->RemoveParticle(mParticleF);

	world->RemoveContactContactGenerator(mConstraintAB);
}

void cSwing::Update()
{
	if (swingBool)
	{
		mParticleB->ApplyForce(glm::vec3(0.0f, 0.0f, -2000.0f));
		mParticleD->ApplyForce(glm::vec3(0.0f, 0.0f, -2000.0f));
		mParticleF->ApplyForce(glm::vec3(0.0f, 0.0f, -2000.0f));
		swingBool = false;
	}
}

void cSwing::Render()
{
	
			if (g_tictactow[0][0] == "X") {
				g_tictactow_meshX[0][0]->positionXYZ = mParticleB->GetPosition();
			}
			else {
				g_tictactow_meshO[0][0]->positionXYZ = mParticleB->GetPosition();
			}
		
	
	//printf(" position of particle : %f  %f  %f", mParticleB->GetPosition().x, mParticleB->GetPosition().y, mParticleB->GetPosition().z);
}