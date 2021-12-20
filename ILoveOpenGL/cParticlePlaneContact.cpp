#include "cParticlePlaneContact.h"

namespace nPhysics
{
	cParticlePlaneContact::cParticlePlaneContact(float distanceFromCenter, glm::vec3 normalParameter)
		: distanceBetweenCenter(distanceFromCenter)
		, contactNormalParameter(normalParameter)
	{

	}


	cParticlePlaneContact::~cParticlePlaneContact()
	{

	}

	size_t cParticlePlaneContact::AddContact(cParticleContact* contact, size_t limit, std::vector<cParticle*>& particles) const
	{
		size_t numContactsCreated = 0;
		for (std::vector<cParticle*>::iterator p = particles.begin(); p != particles.end(); p++)
		{
			float particlePosY = (*p)->GetPosition().y;
			float particlePosX = (*p)->GetPosition().x;
			float particlePosZ = (*p)->GetPosition().z;

			
			printf("\n");
			if ((contactNormalParameter.y == 1)) {
				if (particlePosY < distanceBetweenCenter)
				{
					contact->mContactNormal = contactNormalParameter;
					contact->mParticle0 = *p;
					contact->mParticle1 = nullptr;
					contact->mPenetration = distanceBetweenCenter - particlePosY;
					contact->mRestitution = 0.7f;
					contact++;
					numContactsCreated++;
				}
			}
			if(((contactNormalParameter.y == -1))) {
				if (particlePosY > distanceBetweenCenter)
				{
					contact->mContactNormal = contactNormalParameter;
					contact->mParticle0 = *p;
					contact->mParticle1 = nullptr;
					contact->mPenetration = distanceBetweenCenter + particlePosY;
					contact->mRestitution = 0.7f;
					contact++;
				
					numContactsCreated++;
				}

			}


			if ((contactNormalParameter.x == 1)) {
				if (particlePosX > distanceBetweenCenter)
				{
					
						contact->mContactNormal = contactNormalParameter;
						contact->mParticle0 = *p;
						contact->mParticle1 = nullptr;
						contact->mPenetration = distanceBetweenCenter + particlePosX;
						contact->mRestitution = 0.7f;
						contact++;
						
						numContactsCreated++;
				}
			}

			if ((contactNormalParameter.x == -1)) {
				if (particlePosX < distanceBetweenCenter)
				{

					contact->mContactNormal = contactNormalParameter;
					contact->mParticle0 = *p;
					contact->mParticle1 = nullptr;
					contact->mPenetration = distanceBetweenCenter - particlePosX;
					contact->mRestitution = 0.7f;
					contact++;
					
					numContactsCreated++;
				}
			}

			if ((contactNormalParameter.z == 1)) {
				if (particlePosZ > distanceBetweenCenter)
				{
					contact->mContactNormal = contactNormalParameter;
					contact->mParticle0 = *p;
					contact->mParticle1 = nullptr;
					contact->mPenetration = distanceBetweenCenter - particlePosZ;
					contact->mRestitution = 0.7f;
					contact++;
				
 					(*p)->SetIsAlive(false);
					numContactsCreated++;

				}
			}

			if (numContactsCreated >= limit)
			{
				return numContactsCreated;
			}
		}
		return numContactsCreated;
	}
}