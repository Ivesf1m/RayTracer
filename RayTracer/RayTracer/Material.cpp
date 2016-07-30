#include "Material.h"



Material::Material(double specular, double diffuse, double krefl,
	double krefr, double refrIndex, double kambient, vec4 color)
	: specularComponent(specular), diffuseComponent(diffuse),
	  reflectiveComponent(krefl), refractiveComponent(krefr),
	  refractionIndex(refrIndex), ambientComponent(kambient),
	  color(color)
{
}


Material::~Material()
{
}

double Material::getAmbientComponent()
{
	return ambientComponent
}

void Material::setAmbientComponent(double ambientComponent)
{
	this->ambientComponent = ambientComponent;
}

vec4& Material::getColor()
{
	return color;
}

void Material::setColor(const vec4& color)
{
	this->color = color;
}

double Material::getDiffuseComponent()
{
	return diffuseComponent;
}

void Material::setDiffuseComponent(double diffuseComponent)
{
	this->diffuseComponent = diffuseComponent;
}

double Material::getReflectiveComponent()
{
	return reflectiveComponent;
}

void Material::setReflectiveComponent(double reflectiveComponent)
{
	this->reflectiveComponent = reflectiveComponent;
}

double Material::getRefractiveComponent()
{
	return refractiveComponent;
}

void Material::setRefractiveComponent(double refractiveComponent)
{
	this->refractiveComponent = refractiveComponent;
}

double Material::getRefractiveIndex()
{
	return refractionIndex;
}

void Material::setRefractiveIndex(double refractiveIndex)
{
	this->refractionIndex = refractiveIndex;
}

double Material::getSpecularComponent()
{
	return specularComponent;
}

void Material::setSpecularComponent()
{
	this->specularComponent = specularComponent;
}
