//
// Created by Polina on 19.06.2024.
//

#ifndef RAYTRACER_SHAPE_HPP
#define RAYTRACER_SHAPE_HPP

class Shape{
    virtual double area() const =0;
    virtual double volume() const =0;
};


#endif //RAYTRACER_SHAPE_HPP
