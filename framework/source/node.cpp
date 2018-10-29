#include "node.hpp"


Node::Node(): 
    name_ {"Default Node Name"}
    {}

Node::~Node()
    {}

Node Node::getParent() const
{
    return *parent_; 
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

Node Node::getChildren(std::string child_name) const
{
    if (children_.size() != 0)
    {
        for (auto it : children_)
        {
            if (it.name_ == child_name)
            std::cout << "Children: " << child_name << " exists in our list." << std::endl;
            return it; 
        }
    }
    /* auto it = children_.find(child_name); 
    //it is looking at every element in the list children_ for the child_name
    if (it != children_.end() )
    {
        std::cout << "Children: " << child_name << " exists in our list." << std::endl;
        return it; 
    }
    else 
    {
        std::cout << "Children: " << child_name << " does not exist in out list." <<std::endl;
    } */
}