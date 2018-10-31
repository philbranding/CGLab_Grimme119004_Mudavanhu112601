#include "geometry_node.hpp"

GeometryNode::GeometryNode(std::string nameOfPlanet, Node* parentMotherPlanet, float sizeOfPlanet, float speedOfPlanet, float distanceOfPlanet) : Node(nameOfPlanet, parentMotherPlanet) {
	size = sizeOfPlanet;
	speed = speedOfPlanet;
	distance = distanceOfPlanet;
}

model GeometryNode::getGeometry() {
	return newGeometry;
}

void GeometryNode::setGeometry(model geo_Metry) {
	geometry = geo_Metry;
}

float GeometryNode::getSize() {
	return size;
}

float GeometryNode::getSpeed() {
	return speed;
}

float GeometryNode::getDistance() {
	return distance;
}