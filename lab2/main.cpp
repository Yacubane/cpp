#include <iostream>
#include "Objects.h"

int main() {
    Vector v1(0,0);
    Vector v2(1,1);

    v1+=v2;
    std::cout << "v1 += v2" << std::endl;
    std::cout << v1 << std::endl;

    std::cout << "v1 + v2 " << std::endl;
    std::cout << v1+v2 << std::endl;


    Matrix m1(  1,2,
                3,4);

    std::cout << "m1 * 2" << std::endl;
    std::cout << m1*2 << std::endl;

    std::cout << "2 * m1" << std::endl;
    std::cout << 2*m1 << std::endl;

    std::cout << "m1 * v2" << std::endl;
    std::cout << m1 * v2 << std::endl;

    std::cout << "++v2" << std::endl;
    std::cout << ++v2 << std::endl;

    std::cout << "v2++" << std::endl;
    std::cout << v2++ << std::endl;

    std::cout << "v2" << std::endl;
    std::cout << v2 << std::endl;

    std::cout << "-m1" << std::endl;
    std::cout << -m1 << std::endl;

    std::cout << "v1==v2" << std::endl;
    std::cout << (v1==v2) << std::endl << std::endl;

    v1[1]=10;
    std::cout << "v1[1] = 10" << std::endl;
    std::cout << v1 << std::endl;

    std::cout << "(double)m1" << std::endl;
    std::cout << (double)m1 << std::endl;

    return 0;
}