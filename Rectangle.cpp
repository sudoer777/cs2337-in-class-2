//
// Created by ethan on 10/4/22.
//

#include "Rectangle.h"

Rectangle Rectangle::operator+(const Rectangle &rectangle) const {
    return Rectangle();
}

Rectangle::Rectangle(double length, double width) {
    this->length = length;
    this->width = width;
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
    output << "l:" << rectangle.length << ",w:" << rectangle.width;
    return output;
}

Rectangle::Rectangle(const Rectangle &rectangle) {
    length = rectangle.length;
    width = rectangle.width;
}

Rectangle &Rectangle::operator++() {
    length++;
    width++;
    return *this;
}

Rectangle Rectangle::operator++(int) {
    auto oldRectangle = *this;
    ++*this;
    return oldRectangle;
}
