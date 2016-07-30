#pragma once

#include <glm.hpp>

using glm::vec4;

class Material
{
public:
	Material(double specular = 0.0, double diffuse = 0.0, double krefl = 0.0, 
		double krefr = 0.0, double refrIndex = 0.0, double kambient = 0.0,
		vec4 color = vec4(0.0f, 0.0f, 0.0f, 0.0f));
	~Material();

	//Getters and setters
	double getAmbientComponent();
	void setAmbientComponent(double ambientComponent);

	vec4& getColor();
	void setColor(const vec4& color);

	double getDiffuseComponent();
	void setDiffuseComponent(double diffuseComponent);
	
	double getReflectiveComponent();
	void setReflectiveComponent(double reflectiveComponent);

	double getRefractiveComponent();
	void setRefractiveComponent(double refractiveComponent);

	double getRefractiveIndex();
	void setRefractiveIndex(double refractiveIndex);

	double getSpecularComponent();
	void setSpecularComponent();

private:
	double specularComponent;
	double diffuseComponent;	
	double reflectiveComponent;
	double refractiveComponent;
	double ambientComponent;
	double refractionIndex;
	vec4 color;

};

