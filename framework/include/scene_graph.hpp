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
    node get_root () const;
    void setRoot (node root);

    private: 
    std::string name_;
    node root_; 


};

#endif //scene_graph_HPP