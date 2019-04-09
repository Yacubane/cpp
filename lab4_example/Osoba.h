#ifndef OSOBA_H
#define OSOBA_H

#include <string>
#include <iostream>

namespace Test {
    class Osoba {
    public:
        Osoba(const std::string &_imie, const std::string &_nazwisko, int _rok_ur) : imie(_imie), nazwisko(_nazwisko),
                                                                                     rok_ur(_rok_ur) {};

        void ustawImie(const std::string &im) { this->imie = im; }

        std::string pobierzImie() const { return imie; }

        bool zapisz(std::ostream &os) const; /// zapisuje atrybuty do strumienia
        bool wczytaj(std::istream &is); /// wczytuje atrybuty ze strumienia
    private:
        std::string imie;
        std::string nazwisko;
        int rok_ur;
    };
}
#endif // OSOBA_H