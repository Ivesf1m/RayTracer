#pragma once

#include <glm.hpp>
#include "Material.h"

using glm::vec3;

class Primitive
{
public:
	Primitive(const Material& m);
	virtual ~Primitive();

	//Getter and setter
	Material& getMaterial();
	void setMaterial(const Material& m);

	//Abstract methods
	virtual vec3& getNormal(vec3& point) = 0;

protected:
	Material material;
};

