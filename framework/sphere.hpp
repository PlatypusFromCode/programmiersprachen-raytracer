//
// Created by Polina on 19.06.2024.
//
#include "glm/vec3.hpp"
#include "shape.hpp"
#include "color.hpp"
#ifndef RAYTRACER_SPHERE_HPP
#define RAYTRACER_SPHERE_HPP

class Sphere: public Shape{
private:

    glm::vec3 center_point_;
    double radius_;
public:
    Sphere(glm::vec3 const& center_point, double radius, Color const& color, std::string const& name);
    double area() const;
    double volume() const;
    std::ostream & print (std :: ostream & os) const override;
};

#endif //RAYTRACER_SPHERE_HPP
