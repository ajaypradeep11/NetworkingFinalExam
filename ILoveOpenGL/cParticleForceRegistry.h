#pragma once
#include "cParticle.h"
#include "iForceGenerator.h"
#include <vector>
#include <map>

namespace nPhysics
{
	class cParticleForceRegistry
	{
		typedef std::multimap<cParticle*, iForceGenerator*> registryType;
		typedef std::multimap<cParticle*, iForceGenerator*>::iterator registryIterator;
		typedef std::pair<cParticle*, iForceGenerator*> registryPair;
		typedef std::pair<registryIterator, registryIterator> registryRange;

		registryType mRegistry;
	public:
		cParticleForceRegistry();
		~cParticleForceRegistry();

		cParticleForceRegistry(cParticleForceRegistry& other) = delete;
		cParticleForceRegistry& operator=(cParticleForceRegistry& other) = delete;

		void Register(cParticle* particle, iForceGenerator* generator);
		void Deregister(cParticle* particle, iForceGenerator* generator);
		void Deregister(cParticle* particle);
		void Deregister(iForceGenerator* generator);

		void UpdateForces(float deltaTime);


	};
}
