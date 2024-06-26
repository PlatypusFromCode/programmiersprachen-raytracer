#include "box.hpp"


Box::Box(glm::vec3 const& min, glm::vec3 const& max): Shape(),min_(min),max_(max){};

double Box::area() const {
    return (max_.y-min_.y)*(max_.x-min_.x)*2+(max_.z-min_.z)*(max_.x-min_.x)*2+(max_.y-min_.y)*(max_.z-min_.z)*2;
}

double Box::volume() const {
    return (max_.y-min_.y)*(max_.x-min_.x)*(max_.z-min_.z);
}