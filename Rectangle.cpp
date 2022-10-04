//
// Created by ethan on 10/4/22.
//
#include <iostream>
#include <math.h>
#include "Rectangle.h"

const float epsilon = 0.000001f;

Rectangle::Rectangle(double length, double width) {

}

Rectangle Rectangle::operator+(Rectangle rs){
    Rectangle final;
    
    final.length=length+rs.length;
    final.width=width+rs.width;
    
    return final;
}

Rectangle Rectangle::operator-(Rectangle rs){
    Rectangle final;
    
    final.length=length-rs.length;
    if(final.length<0){
        final.length=0;
    }
    final.width=width-rs.width;
    if(final.width<0){
        final.width=0;
    }
    
    return final;
}

bool Rectangle::operator<(Rectangle rs){
    double lhs = length*width;
    double rhs = rs.length*rs.width;
    if(fabs(lhs-rhs)<epsilon){
        return false;
    }else if(lhs<rhs){
        return true;
    }else{
        return false;
    }
}

bool Rectangle::operator>(Rectangle rs){
    double lhs = length*width;
    double rhs = rs.length*rs.width;
    if(fabs(lhs-rhs)<epsilon){
        return false;
    }else if(lhs>rhs){
        return true;
    }else{
        return false;
}

bool Rectangle::operator==(const Rectangle &rectangle) const {
    return false;
}

std::ostream &operator<<(std::ostream &output, const Rectangle &rectangle) {
    return <#initializer#>;
}

Rectangle::Rectangle(const Rectangle &rectangle) {

}

Rectangle &Rectangle::operator++() {
    return <#initializer#>;
}

Rectangle Rectangle::operator++(int) {
    return Rectangle();
}
