#pragma once
#pragma once
#pragma once

#include <glm.hpp>

using namespace glm;

class Ray
{
public:
	Ray(vec3& origin, vec3& direction);
	Ray(const Ray& ray);
	~Ray();

	//Getters and setters
	vec3& getDirection();
	void setDirection(const vec3& direction);

	vec3& getOrigin();
	void setOrigin(const vec3& origin);

	//Get point at a specified lambda.
	//Follows the formula y = origin + lambda * direction
	vec3& getPointAtLambda(float lambda);

	void printRayInfo();

private:
	vec3 origin;
	vec3 direction;
};


