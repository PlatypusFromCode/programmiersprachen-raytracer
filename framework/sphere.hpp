//
// Created by Polina on 19.06.2024.
//
#include "hitPoint.hpp"
#include "glm/vec3.hpp"
#include "shape.hpp"
#include "color.hpp"
#include "ray.hpp"
#ifndef RAYTRACER_SPHERE_HPP
#define RAYTRACER_SPHERE_HPP

class Sphere: public Shape{
private:

    glm::vec3 center_point_;
    float radius_;
public:
    Sphere(glm::vec3 const& center_point, float radius, Color const& color, std::string const& name);
    float area() const;
    float volume() const;
    std::ostream & print (std :: ostream & os) const override;
    HitPoint intersect(Ray const& ray) const;
    /*bool solveQuadratic(const float &a, const float &b, const float &c,
                        float &x0, float &x1) const;*/
    ~Sphere();
};

#endif //RAYTRACER_SPHERE_HPP
