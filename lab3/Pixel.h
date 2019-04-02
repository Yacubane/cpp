//
// Created by jakubik on 02.04.19.
//

#ifndef LAB3_PIXEL_H
#define LAB3_PIXEL_H


class Pixel {
private:
    int x, y;
public:
    Pixel(int x = 0, int y = 0);
    void set(int x, int y);
    int getX() const;
    int getY() const;
};


#endif //LAB3_PIXEL_H
