#include "Ray.h"
#include <iostream>

int main(int argc, char** argv)
{
	vec3 origin(0.0f, 0.0f, 0.0f);
	vec3 direction(1.0f, 0.0f, 0.0f);
	Ray r(origin, direction);
	r.printRayInfo();
	vec3 point = r.getPointAtLambda(2.0f);
	std::cout << point.x << "\t" << point.y << "\t" << point.z << std::endl;
	getchar();
	return 0;
}