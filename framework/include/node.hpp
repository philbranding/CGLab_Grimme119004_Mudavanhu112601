#ifndef NODE_HPP
#define NODE_HPP
#include <string>
#include <glm/glm.hpp>
#include <iostream>
#include <list>

class Node 
{
    public:
    //constructor and destructor
    Node(); 
    ~Node(); 


    //get-methods
    Node getParent() const; 
    Node getChildren(std::string) const; 
    std::list<Node> getChildrenList() const; 
    std::string getName() const; 
    std::string getPath() const; 
    int getDepth() const; 
    glm::mat4 getLocalTransform() const; 
    glm::mat4 getWorldTransform() const; 


    //set-methods
    void setParent(Node); 
    void setLocalTransform(glm::mat4); 
    void setWorldTransform(glm::mat4); 

    void addChildren(Node); 
    Node removeChildren(std::string); 


 
    Node *parent_; 
    std::list<Node> children_; 
    std::string name_; 
    std::string path_; 
    int depth; 
    glm::mat4 localTransform; 
    glm::mat4 worldTransform; 
};



#endif //NODE_HPP