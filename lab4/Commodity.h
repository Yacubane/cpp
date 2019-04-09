//
// Created by jakubik on 09.04.19.
//

#ifndef LAB4_COMMODITY_H
#define LAB4_COMMODITY_H


#include "Date.h"
#include "Product.h"

namespace SellingSystem {
    class Commodity : public Product {
    protected:
        double price;
        double VAT;
        Date expirationDate;
    public:
        Commodity() = delete;

        Commodity(std::string name, Date productionDate, double price, double VAT, Date expirationDate)
                : Product(std::move(name), productionDate), price(price), VAT(VAT), expirationDate(expirationDate) {};

        double getCost() const override { return price * (1 + VAT); }

        Date getExpirationDate() const { return expirationDate; }

        void load(std::istream &istream) override;

        void save(std::ostream &ostream) const override;
    };
}

#endif //LAB4_COMMODITY_H
