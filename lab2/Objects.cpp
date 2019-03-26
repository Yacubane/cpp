//
// Created by jakubik on 26.03.19.
//

#include "Objects.h"
#include <iomanip>

Matrix::Matrix() {
    this->m00 = 0;
    this->m01 = 0;
    this->m11 = 0;
}

Matrix::Matrix(double m00, double m01, double m10, double m11) {
    this->m00 = m00;
    this->m01 = m01;
    this->m10 = m10;
    this->m11 = m11;
}


std::ostream& operator<< (std::ostream& stream, const Matrix& matrix) {
    stream << "[" << std::setw(10) << matrix.m00 << " " << std::setw(10) << matrix.m01 << "]" << std::endl
           << "[" << std::setw(10) << matrix.m10 << " " << std::setw(10) << matrix.m11 << "]" << std::endl;
    return stream;
}

std::ostream& operator<< (std::ostream& stream, const Vector& vector) {
    stream << "[" << std::setw(10) << vector.x << "]" << std::endl
           << "[" << std::setw(10) << vector.y << "]" << std::endl;
    return stream;
}




Matrix operator*(const Matrix &a, const double b) {
    return Matrix(a.m00 * b, a.m01 * b, a.m10 * b, a.m11 * b);
}

Matrix operator*(const double b, const Matrix &a) {
    return Matrix(a.m00 * b, a.m01 * b, a.m10 * b, a.m11 * b);
}

Vector Matrix::operator*(const Vector &a) const {
    return Vector(this->m00 * a.x + this->m01 * a.y, this->m10 * a.x + this->m11 * a.y);
}

Matrix Matrix::operator-() const {
    return Matrix(-m00, -m01, -m10, -m11);
}



Vector::Vector() {
    this->x = 0;
    this->y = 0;
}
Vector::Vector(double x, double y) {
    this->x = x;
    this->y = y;
}


Vector Vector::operator+(const Vector &vector) {
    Vector returnVector(this->x + vector.x,
                        this->y + vector.y);
    return returnVector;
}


Vector& Vector::operator+=(const Vector &vector) {
    this->x += vector.x;
    this->y += vector.y;
    return *this;
}

Vector& Vector::operator++() {
    this->x++;
    this->y++;
    return *this;
}

Vector Vector::operator++(int x) {
    Vector returnVector(this->x,  this->y);
    ++(*this);
    return returnVector;
}

bool Vector::operator==(const Vector &b) const {
    return x == b.x &&
           y == b.y;
}

double &Vector::operator[](int i) {
    if(i == 0) return this->x;
    if(i == 1) return this->y;
    throw std::invalid_argument("Cannot access array at selected index");
}

