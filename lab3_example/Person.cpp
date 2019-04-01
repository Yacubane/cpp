//
// Created by jakubik on 01.04.19.
//

#include "Person.h"

Person::Person(std::string name, int birthYear) {
    this->name = name;
    this->birthYear = birthYear;
}

std::string Person::getName() {
    return name;
}

int Person::getBirthYear() {
    return birthYear;
}
