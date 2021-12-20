#pragma once

#include "cParticleContact.h"
#include <vector>

namespace nPhysics
{
	class iParticleContactGenerator
	{
	public:
		virtual ~iParticleContactGenerator() {}
		virtual size_t AddContact(cParticleContact* contact, size_t limit, std::vector<cParticle*>& particles) const = 0;
	};
}