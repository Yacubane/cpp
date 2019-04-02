//
// Created by jakubik on 02.04.19.
//

#include <stdexcept>
#include "Polygon.h"

Polygon::Polygon(int size) {
    pixels = new Pixel[10];
    this->maxSize = size;
    this->size = 0;

}

void Polygon::add(const Pixel &pixel) {
    if (size >= maxSize)
        throw std::invalid_argument("Exceeded size of array");
    pixels[size++] = pixel;
}


Polygon::~Polygon() {
    delete[] pixels;
}

Pixel& Polygon::get(int index) const {
    if (index >= size || index < 0)
        throw std::invalid_argument("Wrong index");
    return pixels[index];
}

int Polygon::getSize() const {
    return size;
}

Polygon::Polygon(const Polygon &from) {
    size = from.size;
    maxSize = from.maxSize;
    pixels = new Pixel[maxSize];
    for (int i = 0; i < size; i++) {
        pixels[i] = from.pixels[i];
    }
}

Polygon::Polygon(Polygon &&from) noexcept{
    size = from.size;
    maxSize = from.maxSize;
    pixels = from.pixels;
    from.pixels = nullptr;
}

Polygon &Polygon::operator=(const Polygon &from) {
    if(this != &from) {
        delete[] pixels;
        size = from.size;
        maxSize = from.maxSize;
        pixels = new Pixel[maxSize];
        for (int i = 0; i < size; i++) {
            pixels[i] = from.pixels[i];
        }
    }
    return *this;
}

Polygon &Polygon::operator=(Polygon &&from) noexcept {
    if(this != &from) {
        delete[] pixels;
        size = from.size;
        maxSize = from.maxSize;
        pixels = from.pixels;
        from.pixels = nullptr;
    }
    return *this;
}
