//
// Created by jakubik on 08.04.19.
//

#ifndef LAB4_EXAMPLE_ROWER_H
#define LAB4_EXAMPLE_ROWER_H


#include "Pojazd.h"

namespace Test {
    class Rower : Pojazd {
    protected:
        bool amatorski;
    public:
        Rower(const Osoba &_wlasciciel, int _przebieg, bool _amatorski) : Pojazd(_wlasciciel, _przebieg),
                                                                          amatorski(_amatorski) {};

        float mocKW() const { amatorski ? 0.3 : 0.4; };

    };
}
#endif //LAB4_EXAMPLE_ROWER_H
