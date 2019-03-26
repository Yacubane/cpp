//
// Created by jakubik on 25.03.19.
//

#include <iomanip>
#include "Matrix.h"

Matrix::Matrix() {
    this->mxx = 0;
    this->mxy = 0;
    this->myy = 0;
}

Matrix::Matrix(double mxx, double mxy, double myy) {
    this->mxx = mxx;
    this->mxy = mxy;
    this->myy = myy;
}


Matrix Matrix::operator-(const Matrix &matrix) {
    Matrix returnMatrix(this->mxx - matrix.mxx,
                    this->mxy - matrix.mxy,
                    this->myy - matrix.myy);
    return returnMatrix;
}


Matrix& Matrix::operator-=(const Matrix &matrix) {
    this->mxx -= matrix.mxx;
    this->mxy -= matrix.mxy;
    this->myy -= matrix.myy;
    return *this;
}

Matrix& Matrix::operator--() {
    this->mxx--;
    this->mxy--;
    this->myy--;

    return *this;
}

Matrix Matrix::operator--(int x) {
    Matrix returnMatrix(this->mxx,
                        this->mxy,
                        this->myy);
    --(*this);
    return returnMatrix;
}

bool Matrix::operator<(const Matrix &b) const {
    return getDet() < b.getDet();
}
