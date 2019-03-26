//
// Created by jakubik on 26.03.19.
//

#ifndef LAB2_REAL_OBJECTS_H
#define LAB2_REAL_OBJECTS_H


#include <iostream>

class Vector {
    friend class Matrix;
    double x,y;

public:
    Vector();
    Vector(double x, double y);

    friend std::ostream& operator<< (std::ostream& stream, const Vector& vector);

    Vector& operator+=(const Vector &vector);
    Vector operator+(const Vector &vector);

    Vector& operator++();
    Vector operator++(int null);

    bool operator ==(const Vector &a) const;
    double& operator[](int i);

};

class Matrix {
    double m00, m01, m11, m10;
public:
    Matrix();
    Matrix(double m00, double m01, double m10, double m11);

    friend std::ostream& operator<< (std::ostream& stream, const Matrix& matrix);


    friend Matrix operator*(const Matrix& a, double b);
    friend Matrix operator*(double b, const Matrix& a);
    Vector operator*(const Vector& a) const;
    Matrix operator-() const;

    double getDet() const { return (m00 * m11) - (m01 * m10); }

    explicit operator double() { return getDet(); }


};





#endif //LAB2_REAL_OBJECTS_H
