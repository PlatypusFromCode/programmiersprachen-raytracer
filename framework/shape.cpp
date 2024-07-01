//
// Created by Polina on 26.06.2024.
//
#include "shape.hpp"

Shape::Shape(const Color &color, std::string name): color_(color),name_(name) {};

std::ostream& Shape::print(std::ostream &os) const {
    os <<"color "<<color_.r<<" "<<color_.g<<" "<<color_.b<<" "<<"\n"
       <<"name "<< name_ <<"\n";
    return os;
}

std::ostream& operator<<( std :: ostream & os , Shape const & s){
    return s.print(os);
};

Shape::~Shape(){
    std::cout<<"shape destructor"<<"\n"<<std::endl;
};