//
// Created by jakubik on 02.04.19.
//

#ifndef LAB3_POLYGON_H
#define LAB3_POLYGON_H


#include "Pixel.h"

class Polygon {
private:
    Pixel* pixels;
    int maxSize;
    int size;
public:
    Polygon(int size = 10);
    ~Polygon();

    Polygon(const Polygon &from);
    Polygon(Polygon &&from) noexcept;


    void add(const Pixel& pixel);
    Pixel& get(int index) const;
    int getSize() const;

    Polygon &operator=(const Polygon &group);
    Polygon &operator=(Polygon &&group) noexcept;


};


#endif //LAB3_POLYGON_H
