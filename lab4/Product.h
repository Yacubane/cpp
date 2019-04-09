#include <utility>

//
// Created by jakubik on 09.04.19.
//

#ifndef LAB4_PRODUCT_H
#define LAB4_PRODUCT_H


#include <string>
#include <sstream>
#include "Date.h"
namespace SellingSystem {

    class Product {
    protected:
        std::string name;
        Date productionDate;
    public:
        Product() = delete;

        Product(std::string name, Date productionDate) : name(std::move(name)), productionDate(productionDate) {};

        virtual std::string getDescription() const;

        virtual double getCost() const = 0;

        virtual void save(std::ostream &ostream) const;

        virtual void load(std::istream &istream);
    };
}

#endif //LAB4_PRODUCT_H
