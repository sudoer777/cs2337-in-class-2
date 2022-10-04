/*
* Ethan Reece - EDR220000
* Rajit Goel - RXG210046
*/

#ifndef IN_CLASS_2_RECTANGLE_H
#define IN_CLASS_2_RECTANGLE_H

#include <ostream>
#include <istream>

class Rectangle {
public:
    Rectangle operator+(const Rectangle &rectangle) const;
    Rectangle operator-(const Rectangle &rectangle) const;
    bool operator<(const Rectangle &rectangle) const;
    bool operator>(const Rectangle &rectangle) const;
    Rectangle &operator++();
    Rectangle operator++(int);
    friend std::ostream &operator<<(std::ostream &output, const Rectangle &rectangle);
    inline double getLength() const { return length; }
    inline double getWidth() const { return width; }
    inline void setLength(double l) { length = l; }
    inline void setWidth(double w) { width = w; }
    Rectangle() = default;
    Rectangle(double length, double width);
    Rectangle(const Rectangle &rectangle);
private:
    double length = 0;
    double width = 0;
};


#endif //IN_CLASS_2_RECTANGLE_H
