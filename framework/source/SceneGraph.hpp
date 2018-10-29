#ifndef SCENEGRAPH_HPP
#define SCENEGRAPH_HPP
#include <string>
#include <memory>

class SceneGraph 
{
    public:
    SceneGraph (); 

    ~SceneGraph (); 

    std::string get_name () const; 
    std::string get_root () const;

    private: 
    std::string name_;
    //std::shared_ptr<Node> r_; 


};

#endif /SceneGraph_HPP