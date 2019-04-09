//
// Created by jakubik on 08.04.19.
//

#ifndef LAB4_EXAMPLE_POJAZDSILNIKOWY_H
#define LAB4_EXAMPLE_POJAZDSILNIKOWY_H


#include "Pojazd.h"

namespace Test {
    class PojazdSilnikowy : Pojazd {
    protected:
        float pojemnosc;
        float moc_km;
    public:
        PojazdSilnikowy(const Osoba &_wlasciciel, int _przebieg, int _pojemnosc, int _moc_km)
                : Pojazd(_wlasciciel, _przebieg), pojemnosc(_pojemnosc), moc_km(_moc_km) {}

        float mocKW() const { 1.4 * moc_km; };

        float pobierzPojemnosc() { return pojemnosc; }

    };
}

#endif //LAB4_EXAMPLE_POJAZDSILNIKOWY_H
