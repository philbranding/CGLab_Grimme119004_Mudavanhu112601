#ifndef NODE_HPP
#define NODE_HPP
#include <string>
#include <glm/glm.hpp>
#include <memory> //std::shared_ptr
#include <iostream>
#include <list>

class Node 
{
    public:
    //constructor and destructor
    Node(); 
    ~Node(); 


    //get-methods
    std::shared_ptr<Node> getParent() const; 
    std::shared_ptr<Node> getChildren(std::string) const; 
    std::list<Node> getChildrenList() const; 
    std::string getName() const; 
    std::string getPath() const; 
    int getDepth() const; 
    glm::mat4 getLocalTransform(); 
    glm::mat4 getWorldTransform(); 


    //set-methods
    void setParent(std::shared_ptr <Node>); 
    void setLocalTransform(glm::mat4); 
    void setWorldTransform(glm::mat4); 

    void addChildren(std::shared_ptr<Node>); 
    std::shared_ptr<Node> removeChildren(std::string); 



    private:
    std::shared_ptr<Node> parent_; 
    //Node is a pointer
    std::list<Node> children_; 
    std::string name_; 
    std::string path_; 
    int depth_; 
    glm::mat4 localTransform; 
    glm::mat4 worldTransform; 
};



#endif //NODE_HPP