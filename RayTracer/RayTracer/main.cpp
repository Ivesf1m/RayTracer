#include "Ray.h"
#include <iostream>

int main(int argc, char** argv)
{
	vec3 origin(0.0f, 0.0f, 0.0f);
	vec3 direction(1.0f, 0.0f, 0.0f);
	Ray r(origin, direction);
	r.printRayInfo();
	getchar();
	return 0;
}