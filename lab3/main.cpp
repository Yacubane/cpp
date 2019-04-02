#include <iostream>
#include "Polygon.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    {
        std::cout << std::endl << "Test konstruktora kopiującego" << std::endl;

        Polygon polygon(10);
        polygon.add(Pixel(1, 1));
        polygon.add(Pixel(2, 1));

        Polygon polygon2(polygon);
        polygon2.get(1).set(3, 3);

        std::cout << polygon.get(1).getX() << " " << polygon.get(1).getY() << std::endl;
        std::cout << polygon2.get(1).getX() << " " << polygon2.get(1).getY() << std::endl;
    }
    {
        std::cout << std::endl << "Test konstruktora przenoszącego" << std::endl;

        Polygon polygon(10);
        polygon.add(Pixel(1, 1));
        polygon.add(Pixel(2, 1));

        Polygon polygon2(std::move(polygon));
        polygon2.get(1).set(3, 3);

        //std::cout << polygon.get(1).getX() << " " << polygon.get(1).getY() << std::endl;
        std::cout << polygon2.get(1).getX() << " " << polygon2.get(1).getY() << std::endl;
    }
    {
        std::cout << std::endl << "Test operatora kopiującego" << std::endl;

        Polygon polygon(10);
        polygon.add(Pixel(1, 1));
        polygon.add(Pixel(2, 1));

        Polygon polygon2(1);
        polygon2.add(Pixel(1, 1));

        polygon2 = polygon;
        polygon2.get(1).set(3, 3);

        std::cout << polygon.get(1).getX() << " " << polygon.get(1).getY() << std::endl;
        std::cout << polygon2.get(1).getX() << " " << polygon2.get(1).getY() << std::endl;
    }
    {
        std::cout << std::endl << "Test operatora przenoszącego" << std::endl;
        Polygon polygon(10);
        polygon.add(Pixel(1, 1));
        polygon.add(Pixel(2, 1));

        Polygon polygon2(1);
        polygon2.add(Pixel(1, 1));

        polygon2 = std::move(polygon);
        polygon2.get(1).set(3, 3);

        //std::cout << polygon.get(1).getX() << " " << polygon.get(1).getY() << std::endl;
        std::cout << polygon2.get(1).getX() << " " << polygon2.get(1).getY() << std::endl;
    }


    {
        std::cout << std::endl << "Test wyjątku dodawania" << std::endl;

        Polygon polygon2(1);
        polygon2.add(Pixel(1, 1));
        try {
            polygon2.add(Pixel(2, 2));
        } catch (const std::invalid_argument& e) {
            std::cout << e.what();
        }

        std::cout << std::endl << "Test wyjątku pobierania" << std::endl;
        try {
            polygon2.get(1);
        } catch (const std::invalid_argument& e) {
            std::cout << e.what();
        }

        std::cout << std::endl << "Test metody getSize" << std::endl;
        std::cout << polygon2.getSize() << std::endl;

    }



    return 0;
}