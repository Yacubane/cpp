//
// Created by jakubik on 08.04.19.
//

#ifndef LAB4_EXAMPLE_POJAZDOSOBOWY_H
#define LAB4_EXAMPLE_POJAZDOSOBOWY_H


#include "PojazdSilnikowy.h"

namespace Test {
    class PojazdOsobowy : PojazdSilnikowy {
    protected:
        std::string marka;
    public:
        PojazdOsobowy(const Osoba &_wlasciciel, int _przebieg, int _pojemnosc, int _moc_km, const std::string &_marka)
                : PojazdSilnikowy(_wlasciciel, _przebieg, _pojemnosc, _moc_km), marka(_marka) {

        }
    };
}

#endif //LAB4_EXAMPLE_POJAZDOSOBOWY_H
