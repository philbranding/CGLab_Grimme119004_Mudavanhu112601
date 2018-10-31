#include "scene_graph.hpp"

scene_graph::scene_graph ():
    name_ {"Default Scene Name"},
    root_ {}
    {}

scene_graph::~scene_graph ()
    {} 

std::string scene_graph::getName() const
{
    return name_; 
}

Node scene_graph::getRoot() const
{
    return root_;
}

void scene_graph::setName(std::string name)
{
    this->name_ = name;
}

void scene_graph::setRoot(Node root)
{
    this->root_ = root;  
}


 
//jede Matrix hat lokal (Transformation des Knotens in Hinsicht auf sein Elternelement) 
//und World (beschreibt die Transformation dieses Knotens in Hinsicht auf das Welt(Root) Koordinatensystem)
//Welttransformation des Knotens = Welttransformation des Elternelements * Lokaltransformation des Knotens (Folien VR)