#include <iostream>
#include "Date.h"
#include "Product.h"
#include "Commodity.h"
#include "CommodityWithBail.h"
#include "Service.h"

int main() {
    SellingSystem::Date date(2019, 8, 4);
    //date.load(std::cin);
    std::cout << date << std::endl;


    SellingSystem::Product *products[3];

    SellingSystem::Commodity c1("Chleb", date, 1.0, 0.23, SellingSystem::Date(2019, 1, 1));
    c1.save(std::cout);
    products[0] = &c1;
    std::cout << std::endl;

    SellingSystem::CommodityWithBail c2("Masło", date, 1.0, 0.23, SellingSystem::Date(2019, 1, 1), 100);
    products[1] = &c2;
    c2.save(std::cout);
    std::cout << std::endl;

    SellingSystem::Service s1("Pomoc IT", date, 100, 100);
    products[2] = &s1;
    s1.save(std::cout);
    std::cout << std::endl;

    s1.load(std::cin);
    s1.save(std::cout);
    std::cout << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < 3; i++) {
        products[i]->save(std::cout);
        std::cout << std::endl;

    }
    return 0;
}