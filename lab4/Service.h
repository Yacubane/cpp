#include <utility>

//
// Created by jakubik on 09.04.19.
//

#ifndef LAB4_SERVICE_H
#define LAB4_SERVICE_H


#include "Product.h"
namespace SellingSystem {

    class Service : public Product {
    protected:
        double costOfHour;
        double noOfHours;

    public:
        Service() = delete;

        Service(std::string name, Date productionDate, int costOfHour, int noOfHour)
                : Product(std::move(name), productionDate), costOfHour(costOfHour), noOfHours(noOfHour) {};

        void load(std::istream &istream) override;;

        void save(std::ostream &ostream) const override;;


        double getCost() const override {
            return costOfHour * noOfHours;
        }

    };
}

#endif //LAB4_SERVICE_H
