#ifndef CAMERA_NODE_HPP
#define CAMERA_NODE_HPP

#include "node.hpp"
#include <model.hpp>
#include <vector>
#include <glbinding/gl/gl.h>

// use gl definitions from glbinding 
using namespace gl;

#include <GLFW/glfw3.h>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/matrix_inverse.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <iostream>


class cameraNode : public Node {
public:
	//Constructors Overrloading

	cameraNode();
	cameraNode():Node{},
	isPespective{false},
	isEnabled{false},
	projectionMatrix{0}
	{}

	cameraNode(
	bool isPespective,
	bool isEnabled,
	gml::mat4 const& projectionMatrix);

	~cameraNode();

	//Getters
	void getPespective(bool isPespective);
	void getEnable(bool enableCamera);
	gml::mat4 getProjectionMatrix() const;

	//Setters
	void setPespective(bool isPespective);
	void setEnable(bool isCamera);
	void setProjectionMatrix(gml::mat4 const& projectionMatrix);

	private:
	bool isPespectiveCameraNode,
	bool isEnabledCameraNode,
	gml::mat4 projectionMatrixNodeCamera;
};

#endif //CAMERA_NODE_HPP