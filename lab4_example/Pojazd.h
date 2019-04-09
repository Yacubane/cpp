#ifndef POJAZD_H
#define POJAZD_H

#include <string>
#include <iostream>

#include "Osoba.h"

namespace Test {
    class Pojazd {
    public:
        Pojazd(const Osoba &_wlasciciel, int _przebieg) : wlasciciel(_wlasciciel), przebieg(_przebieg) {};

        virtual ~Pojazd();

        std::string
        opis() const; /// zwraca napis z wszystkimi atrybutami (np. "wlasciciel: Jan Kowalski 1970, przebieg: 120000")
        virtual float mocKW() const {};

        bool zapisz(std::ostream &os) const;

        bool wczytaj(std::istream &is);

    protected:
        Osoba wlasciciel;
        int przebieg;
    };


    Pojazd::~Pojazd() {

    }

    std::string Pojazd::opis() const {
        return std::__cxx11::string();
    }
}
#endif // POJAZD_H