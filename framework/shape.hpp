//
// Created by Polina on 19.06.2024.
//
#include "color.hpp"

#ifndef RAYTRACER_SHAPE_HPP
#define RAYTRACER_SHAPE_HPP

class Shape{
protected:
    std::string name_;
    Color color_;
public:
    Shape(Color const& color,std::string name);
    virtual double area() const =0;
    virtual double volume() const =0;
    virtual std::ostream & print (std :: ostream & os) const;
};
std::ostream& operator<<( std :: ostream & os , Shape const & s);



#endif //RAYTRACER_SHAPE_HPP
