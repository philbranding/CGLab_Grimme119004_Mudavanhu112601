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

    std::string get_name () const; 
    void setName(std::string name);
    Node get_root () const;
    void setRoot (Node root);

    private: 
    std::string name_;
    Node root_; 


};

#endif //scene_graph_HPP