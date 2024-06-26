#include "box.hpp"
#include "shape.hpp"


Box::Box(glm::vec3 const& min,glm::vec3 const& max, Color const& color, std::string const& name):
        Shape::Shape(color,name),
        min_(min),
        max_(max){};

double Box::area() const {
    return (max_.y-min_.y)*(max_.x-min_.x)*2+(max_.z-min_.z)*(max_.x-min_.x)*2+(max_.y-min_.y)*(max_.z-min_.z)*2;
}

double Box::volume() const {
    return (max_.y-min_.y)*(max_.x-min_.x)*(max_.z-min_.z);
}

std::ostream& Box::print(std::ostream &os) const {
    os <<"position min "<< min_.x<<" "<< min_.y<< min_.z<<"\n"
       <<"position max "<< max_.x<<" "<< max_.y<< max_.z<<"\n";
       Shape::print(os);
    return os;
}