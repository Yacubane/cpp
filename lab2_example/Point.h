//
// Created by jakubik on 25.03.19.
//

#ifndef LAB2_POINT_H
#define LAB2_POINT_H


#include "Matrix.h"

class Point {
    double x,y;

public:
    Point();
    Point(double x, double y);
    double getX() const { return x; }
    double getY() const { return y; }

    Point operator*(const Matrix &matrix) const;
    Point operator-() const;
    double& operator[](int i);
};


#endif //LAB2_POINT_H
