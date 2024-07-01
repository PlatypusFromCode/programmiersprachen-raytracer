#include "string"
#include "color.hpp"
#include <glm/vec3.hpp>

struct HitPoint{
    bool is_hit_happend= false;
    float t;
    std::string hitted_name;
    Color hitted_color;
    glm::vec3 hitted_point;
    glm::vec3 direction_of_hitting;

};

#ifndef RAYTRACER_HITPOINT_HPP
#define RAYTRACER_HITPOINT_HPP

#endif //RAYTRACER_HITPOINT_HPP
