#ifndef GEOMETRY_NODE_HPP
#define GEOMETRY_NODE_HPP

#include "node.hpp"
#include <map>
#include <vector>
#include <glbinding/gl/gl.h>

// use gl definitions from glbinding 
using namespace gl;

#include <GLFW/glfw3.h>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/matrix_inverse.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <iostream>


class geometryNode : public Node {
public:
	//Constructors Overrloading
	geometryNode();
	geometryNode(std::string nameOfPlanet);
	geometryNode(std::string nameOfPlanet, Node* parentMotherPlanet, float sizeOfPlanet, float speedOfPlanet, float distanceOfPlanet );
	~geometryNode();

	//
	
	void setGeometry(model& newGeometry);
	void setSize(float sizeOfPlanet);
	void setSpeed(float speedOfPlanet);
	void setDistance(float distanceOfPlanet);

	//
	model* getGeometry();
	float getSize();
	float getSpeed();
	float getDistance();

protected:
	model* newGeometry;
};
#endif //GEOMETRY_NODE_HPP