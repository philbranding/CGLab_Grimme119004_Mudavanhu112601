#include "scene_graph.hpp"

scene_graph::scene_graph ():
    name_ {"Default Scene Name"},
    root_ {}
    {}

scene_graph::~scene_graph ()
    {} 

std::string scene_graph::get_name() const
{
    return name_; 
}

node scene_graph::get_root() const
{
    return root_;
}

void scene_graph::setName(std::string name)
{
    this->name_ = name;
}

void scene_graph::setRoot(node root)
{
    this->root_ = root;  
}


 