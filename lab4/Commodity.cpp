//
// Created by jakubik on 09.04.19.
//

#include "Commodity.h"
namespace SellingSystem {

    void Commodity::load(std::istream &istream) {
        Product::load(istream);
        istream >> price;
        istream >> VAT;
        expirationDate.load(istream);

    }

    void Commodity::save(std::ostream &ostream) const {
        Product::save(ostream);
        ostream << " " << price << " " << VAT << " " << expirationDate;
    }
}