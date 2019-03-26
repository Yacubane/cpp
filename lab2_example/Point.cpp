//
// Created by jakubik on 25.03.19.
//

#include "Point.h"
#include "Matrix.h"

Point::Point() {
    this->x = 0;
    this->y = 0;
}
Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

Point Point::operator*(const Matrix &matrix) const {
    Point point(this->x * matrix.getMXX() + this->y * matrix.getMXY(),
                this->x * matrix.getMXY() + this->y * matrix.getMYY());
    return point;
}

Point Point::operator-() const {
    return Point(-this->x, -this->y);
}

double &Point::operator[](int i) {
    if(i == 0) return this->x;
    if(i == 1) return this->y;
    throw std::invalid_argument("Cannot access array at selected index");
}


