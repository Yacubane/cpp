//
// Created by jakubik on 09.04.19.
//

#include "CommodityWithBail.h"

namespace SellingSystem {

    void CommodityWithBail::load(std::istream &istream) {
        Commodity::load(istream);
        istream >> bail;

    }

    void CommodityWithBail::save(std::ostream &ostream) const {
        Commodity::save(ostream);
        ostream << " " << bail;
    }
}