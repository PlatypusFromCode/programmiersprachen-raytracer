//
// Created by Polina on 24.06.2024.
//
#define _USE_MATH_DEFINES
#include "sphere.hpp"
#include <cmath>
#include "glm/gtx/intersect.hpp"

Sphere::Sphere(glm::vec3 const& center_point, float radius, Color const& color, std::string const& name):
Shape::Shape(color,name),
center_point_(center_point),
radius_(radius){};

float Sphere::volume() const {
    return pow(radius_,3)*M_PI*4/3;
}

float Sphere::area() const {
    return 4*M_PI* pow(radius_,2);
}

std::ostream& Sphere::print(std::ostream &os) const {
    os <<"position  "<< center_point_.x<<" "<< center_point_.y<< center_point_.z<<"\n"
       <<"radius "<< radius_<<"\n";
       Shape::print(os);
    return os;
}

Sphere::~Sphere(){
    std::cout<<"sphere destructor"<<"\n"<<std::endl;
}


/*bool Sphere::solveQuadratic(const float &a, const float &b, const float &c,
                    float &x0, float &x1) const{
    float discr = b * b - 4 * a * c;
    if (discr < 0) return false;
    else if (discr == 0) x0 = x1 = -0.5 * b / a;
    else {
        float q = (b > 0) ?
                  -0.5 * (b + sqrt(discr)) :
                  -0.5 * (b - sqrt(discr));
        x0 = q / a;
        x1 = c / q;
    }
    if (x0 > x1) std::swap(x0, x1);

    return true;
}

HitPoint Sphere::intersect(const Ray &ray) const{
    HitPoint hitPoint{};
    float t0, t1;

    glm::vec3 l = ray.origin - center_point_;
    float a = glm::dot(ray.direction,ray.direction);
    float b = 2 * glm::dot(ray.direction,l);
    float c = glm::dot(l,l) - radius_ * radius_;
    if (!solveQuadratic(a, b, c, t0, t1)) return hitPoint;

    if (t0 > t1) std::swap(t0, t1);

    if (t0 < 0) {
        t0 = t1;
        if (t0 < 0) return hitPoint;
    }

    float t = t0;
    hitPoint.is_hit_happend= true;
    hitPoint.t=t;
    hitPoint.hitted_color=color_;
    hitPoint.hitted_name=name_;
    hitPoint.hitted_point=ray.origin+ray.direction*t;
    hitPoint.direction_of_hitting=glm::normalize(ray.direction);


    return hitPoint;
}*/

HitPoint Sphere::intersect(Ray const& ray) const{
    float t;
    HitPoint hitPoint;
    auto result=glm::intersectRaySphere(ray.origin,glm::normalize(ray.direction),center_point_,radius_*radius_,t);
    hitPoint.is_hit_happend=result;
    hitPoint.direction_of_hitting=glm::normalize(ray.direction);
    hitPoint.hitted_point=ray.origin+t*ray.direction;
    hitPoint.hitted_color=color_;
    hitPoint.hitted_name=name_;
    hitPoint.t=t;
    return hitPoint;
}