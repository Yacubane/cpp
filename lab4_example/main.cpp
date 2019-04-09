#include <iostream>
#include "Osoba.h"
#include "Pojazd.h"
#include "PojazdSilnikowy.h"
#include "PojazdOsobowy.h"
#include "Rower.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Test::Osoba osoba("Jakub", "Dybczak", 1);
    Test::Pojazd pojazd(osoba, 1);
    Test::PojazdSilnikowy pojazdSilnikowy(osoba, 1, 2, 2);
    Test::PojazdOsobowy pojazdOsobowy(osoba, 1, 2, 2, "");
    Test::Rower rower(osoba, 1, 2);
    return 0;
}