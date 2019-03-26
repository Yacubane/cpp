#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>

class Point {
private:
    float x, y, z;
    static int counter;
public:
    Point ();
    Point(float x, float y, float z = 0);
    float getX() { return x; }
    void setX(int x) { this->x = x; }
    double distance(Point point) { return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2) + pow(point.z - z, 2)); }
    void print() { std::cout << x << "," << y << "," << z << std::endl; }
    static int getCounter() { return counter; }
    void save(std::ostream &os);
    void load(std::istream &is);

};


Point::Point() {
    this->x = 0;
    this->y = 0;
    this->z = 0;
    Point::counter++;
}


Point::Point(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
    Point::counter++;

}

int Point::counter = 0;

void Point::save(std::ostream &os) {
    os << std::fixed << std::setprecision(4) <<
        "[" << x << "," << y << "," << z << "]";
}

void Point::load(std::istream &is) {
    char tmp;
    is >> tmp >> x >> tmp >> y >> tmp >> z >> tmp;
}


int main() {
    Point p1;
    Point p2(10,1,1);

    p2.print();
    p2.setX(1);
    p2.print();

    std::cout << "Distance p1 -> p2 " << p2.distance(p1) << std::endl;
    std::cout << "Licznik: " << Point::getCounter() << std::endl;
    std::cout << "getX: " << p2.getX() << std::endl;

    p2.save(std::cout);
    p2.load(std::cin);
    p2.print();
    return 0;
}