#include <iostream>
#include <iomanip>
#include "Matrix.h"
#include "Point.h"


std::ostream& operator<< (std::ostream& stream, const Matrix& matrix) {
    stream << "[" << std::setw(10) << matrix.getMXX() << " " << std::setw(10) << matrix.getMXY() << "]" << std::endl
           << "[" << std::setw(10) << matrix.getMXY() << " " << std::setw(10) << matrix.getMYY() << "]" << std::endl;
    return stream;
}

std::ostream& operator<< (std::ostream& stream, const Point& point) {
    stream << "[" << std::setw(10) << point.getX() << " " << std::setw(10) << point.getY() << "]" << std::endl;
    return stream;
}

Matrix operator*(const Matrix& a, const double b) {
    Matrix matrix(a.getMXX() * b, a.getMXY() * b, a.getMYY() * b);
    return matrix;
}
Matrix operator*(const double b, const Matrix& a) {
    return a*b;
}

int main() {
    Matrix matrix (1,2,3);
    Point p(3,4);



    std::cout << p << std::endl;
    p[1]=5;
    std::cout << (double)matrix << std::endl;

    return 0;
}