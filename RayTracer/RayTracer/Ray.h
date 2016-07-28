#pragma once
#pragma once
#pragma once

#include <glm.hpp>

using namespace glm;

class Ray
{
public:
	Ray(vec3& origin, vec3& direction);
	~Ray();

	vec3& getDirection();
	void setDirection(const vec3& direction);

	vec3& getOrigin();
	void setOrigin(const vec3& origin);

	void printRayInfo();

private:
	vec3 origin;
	vec3 direction;
};


