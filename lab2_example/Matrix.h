//
// Created by jakubik on 25.03.19.
//

#ifndef LAB2_MATRIX_H
#define LAB2_MATRIX_H


#include <iostream>

class Matrix {
    double mxx, mxy, myy;

public:
    Matrix();
    Matrix(double mxx, double mxy, double myy);

    double getMXX() const { return mxx; }
    double getMXY() const { return mxy; }
    double getMYY() const { return myy; }
    double getDet() const { return (mxx * myy) - (mxy * mxy); }

    Matrix operator-(const Matrix& b);
    Matrix& operator-=(const Matrix& b);
    Matrix& operator--();
    Matrix operator--(int x);
    bool operator <(const Matrix &b) const;
    explicit operator double() { return getDet(); }


};


#endif //LAB2_MATRIX_H
