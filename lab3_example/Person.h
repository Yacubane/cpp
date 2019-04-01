//
// Created by jakubik on 01.04.19.
//
#include <string>

#ifndef LAB3_EXAMPLE_PERSON_H
#define LAB3_EXAMPLE_PERSON_H

class Person {
    std::string name;
    int birthYear;

public:
    Person(std::string name, int birthYear);
    std::string getName();
    int getBirthYear();
};


#endif //LAB3_EXAMPLE_PERSON_H
