//
// Created by jakubik on 09.04.19.
//

#include "Product.h"

namespace SellingSystem {
    std::string Product::getDescription() const {
        std::stringstream stringstream;
        stringstream << name << " " << productionDate;
        return stringstream.str();
    }

    void Product::load(std::istream &istream) {
        istream >> name;
        productionDate.load(istream);
    }

    void Product::save(std::ostream &ostream) const {
        ostream << name << " ";
        productionDate.save(ostream);
    }
}