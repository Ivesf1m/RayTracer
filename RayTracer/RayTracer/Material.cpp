#include "Material.h"

Material::Material(double specular, double diffuse, double krefl,
	double krefr, double refrIndex, double kambient, vec4 color)
	: specularComponent(specular), diffuseComponent(diffuse),
	  reflectiveComponent(krefl), refractiveComponent(krefr),
	  refractionIndex(refrIndex), ambientComponent(kambient),
	  color(color)
{
}

Material::Material(const Material& material)
	: specularComponent(material.specularComponent),
	  diffuseComponent(material.diffuseComponent),
	  reflectiveComponent(material.reflectiveComponent),
	  refractiveComponent(material.refractiveComponent),
	  refractionIndex(material.refractionIndex),
	  ambientComponent(material.ambientComponent),
	  color(material.color)
{

}

Material::~Material()
{
}

Material& Material::operator=(const Material& material)
{
	if (this != &material) {
		this->ambientComponent = material.ambientComponent;
		this->color = material.color;
		this->diffuseComponent = material.diffuseComponent;
		this->reflectiveComponent = material.reflectiveComponent;
		this->refractiveComponent = material.refractiveComponent;
		this->refractionIndex = material.refractionIndex;
		this->specularComponent = material.specularComponent;
	}
	return *this;
}

double Material::getAmbientComponent()
{
	return ambientComponent;
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
