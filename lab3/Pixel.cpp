//
// Created by jakubik on 02.04.19.
//

#include "Pixel.h"

Pixel::Pixel(int x, int y) {
    this->x = x;
    this->y = y;

}

void Pixel::set(int x, int y) {
    this->x = x;
    this->y = y;
}

int Pixel::getX() const {
    return x;
}

int Pixel::getY() const {
    return y;
}
