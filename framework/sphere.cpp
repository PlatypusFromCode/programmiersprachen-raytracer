//
// Created by Polina on 24.06.2024.
//
#define _USE_MATH_DEFINES
#include "sphere.hpp"
#include <cmath>

Sphere::Sphere(glm::vec3 const& center_point, double const radius): Shape(),center_point_(center_point),radius_(radius){};

double Sphere::volume() const {
    return pow(radius_,3)*M_PI*4/3;
}

double Sphere::area() const {
    return 4*M_PI* pow(radius_,2);
}
