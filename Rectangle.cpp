//
// Created by ethan on 10/4/22.
//

#include "Rectangle.h"

Rectangle Rectangle::operator+(const Rectangle &rectangle) const {
    return Rectangle();
}

Rectangle::Rectangle(double length, double width) {

}

Rectangle Rectangle::operator-(const Rectangle &rectangle) const {
    return Rectangle();
}

bool Rectangle::operator<(const Rectangle &rectangle) const {
    return false;
}

bool Rectangle::operator>(const Rectangle &rectangle) const {
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
