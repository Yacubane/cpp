//
// Created by jakubik on 09.04.19.
//

#include "Service.h"
namespace SellingSystem {

    void Service::load(std::istream &istream) {
        Product::load(istream);
        istream >> costOfHour;
        istream >> noOfHours;
    }

    void Service::save(std::ostream &ostream) const {
        Product::save(ostream);
        ostream << " " << costOfHour << " " << noOfHours;
    }
}