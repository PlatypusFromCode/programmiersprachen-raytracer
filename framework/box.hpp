//
// Created by Polina on 19.06.2024.
//
#include <glm/vec3.hpp>
#include "shape.hpp"
#ifndef RAYTRACER_BOX_HPP
#define RAYTRACER_BOX_HPP

class Box: public Shape{
private:
    glm::vec3 min_;
    glm::vec3 max_;
public:
    Box(glm::vec3 const& min,glm::vec3 const& max, Color const& color, std::string const& name);
    float area() const;
    float volume() const;
    std::ostream & print (std :: ostream & os) const override;
    ~Box();
};

#endif //RAYTRACER_BOX_HPP
