//
// Created by jakubik on 09.04.19.
//

#ifndef LAB4_COMMODITYWITHBAIL_H
#define LAB4_COMMODITYWITHBAIL_H

#include "Commodity.h"
namespace SellingSystem {
    class CommodityWithBail : public Commodity {
    private:
        double bail;
    public:
        CommodityWithBail() = delete;

        CommodityWithBail(std::string name, Date productionDate, double price, double VAT, Date expirationDate,
                          double bail)
                : Commodity(std::move(name), productionDate, price, VAT, expirationDate), bail(bail) {};

        double getCost() const override { return price * (1 + VAT) + bail; }

        void load(std::istream &istream) override;;

        void save(std::ostream &ostream) const override;;
    };
}


#endif //LAB4_COMMODITYWITHBAIL_H
