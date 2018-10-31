#include "node.hpp"



Node::Node()
{} 

Node::~Node()
{}


//get-methods
std::shared_ptr<Node> Node::getParent() const
{}

std::shared_ptr<Node> Node::getChildren(std::string) const
{}

std::list<Node> Node::getChildrenList() const
{}

std::string Node::getName() const
{}

std::string Node::getPath() const
{}

int Node::getDepth() const
{}

glm::mat4 Node::getLocalTransform()
{}

glm::mat4 Node::getWorldTransform()
{}


//set-methods
void Node::setParent(std::shared_ptr <Node>)
{}

void Node::setLocalTransform(glm::mat4)
{}

void Node::setWorldTransform(glm::mat4)
{}

void Node::addChildren(std::shared_ptr<Node>)
{}

std::shared_ptr<Node> Node::removeChildren(std::string)
{}


































/*


Node::Node(): 
name_ {"Default Node Name"}
{}

Node::~Node()
{}

std::shared_ptr<Node> Node::getParent() const
{
return parent_; 
}

std::list<Node> Node::getChildrenList() const
{
return children_; 
} 

std::string Node::getName() const
{
return name_; 
} 

std::string Node::getPath() const 
{
return path_; 
}

int Node::getDepth() const
{
return depth_;
}

glm::mat4 Node::getLocalTransform()
{
return localTransform; 
}

glm::mat4 Node::getWorldTransform()
{
return worldTransform;
}

std::shared_ptr<Node> Node::getChildren(std::string child_name) const
{}

void Node::setParent(std::shared_ptr<Node> new_parent)
{
this->parent_ = new_parent; 
}

void Node::setLocalTransform(glm::mat4 new_local_transform)
{
this->localTransform = new_local_transform; 
}

void Node::setWorldTransform(glm::mat4 new_world_transform)
{
this->worldTransform = new_world_transform; 
}

void Node::addChildren(Node)
{
/*  if (children_.size() != 0)
{
    for (auto it : children_)
    {
        if (it.name_ == child_name)
        std::cout << "Children: " << child_name << " exists in our list." << std::endl;
        return *it; 
    }
}
auto it = children_.find(child_name); 
//it is looking at every element in the list children_ for the child_name
if (it != children_.end() )
{
    std::cout << "Children: " << child_name << " exists in our list." << std::endl;
    return it; 
}
else 
{
    std::cout << "Children: " << child_name << " does not exist in out list." <<std::endl;
} 
}

std::shared_ptr<Node> Node::removeChildren(std::string)
{
//this need to be implemented
} */