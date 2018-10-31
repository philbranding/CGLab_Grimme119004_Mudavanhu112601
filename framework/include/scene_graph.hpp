#ifndef SCENE_GRAPH_HPP
#define SCENE_GRAPH_HPP

#include <string>
#include <iostream>
#include "node.hpp"

class scene_graph 
{
    public:
    scene_graph(); 

    ~scene_graph(); 

    std::string getName () const; 
    void setName(std::string name);

    Node getRoot () const;
    void setRoot (Node root);

    private: 
    std::string name_;
    Node root_; 


};

#endif //SCENE_GRAPH_HPP