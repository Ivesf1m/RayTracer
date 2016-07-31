#include "Primitive.h"



Primitive::Primitive(const Material& m)
	: material(m)
{
}


Primitive::~Primitive()
{
}

Material& Primitive::getMaterial()
{
	return material;
}

void Primitive::setMaterial(const Material& m)
{
	this->material = m;
}
