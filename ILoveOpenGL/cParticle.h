#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/rotate_vector.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <glm/gtx/euler_angles.hpp>
#include "cMesh.h"
namespace nPhysics
{
	class cParticle
	{
	private:
		// Linear position of the particle in world space
		glm::vec3 mPosition;
		// Linear velocity of the particle in world space
		glm::vec3 mVelocity;
		// Linear acceleration of the particle in world space
		glm::vec3 mAcceleration;
		// Inverse mass
		float mInverseMass;
		// Externally applied forces accumulated during a time step
		glm::vec3 mAppliedForce;
		// Damping is applied to linear motion
		// Required to remove energy added through numerical instability of integration
		// Also generally used as an overall "friction" for the particle
		float mDamping;
		
		bool mIsAlive;
	public:
		cMesh* meshPointer;
		cParticle(float mass, const glm::vec3& position);
		virtual ~cParticle();

		cParticle() = delete;
		cParticle(cParticle& other) = delete;
		cParticle& operator=(cParticle& other) = delete;

		void SetIsAlive(bool isAlive);
		bool GetIsAlive() const;

		void SetDamping(float damping);
		float GetDamping() const;

		void SetMass(float mass);
		float GetMass() const;
		float GetInverseMass() const;

		bool IsStaticObject() const;

		glm::vec3 GetPosition() const;
		void GetPosition(glm::vec3& position);
		void SetPosition(const glm::vec3& position);

		glm::vec3 GetVelocity() const;
		void GetVelocity(glm::vec3& velocity);
		void SetVelocity(const glm::vec3& velocity);

		glm::vec3 GetAcceleration() const;
		void GetAcceleration(glm::vec3& acceleration);
		void SetAcceleration(const glm::vec3& acceleration);


		void ApplyForce(const glm::vec3& force);
		void ApplyImpulse(const glm::vec3& impulse);

		void ClearAppliedForces();

		virtual void Integrate(float deltaTime);

	};
}