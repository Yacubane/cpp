//
// Created by jakubik on 01.04.19.
//

#include <stdexcept>
#include <iostream>
#include "Group.h"

Group::Group(int size) {
    persons = new Person *[size];
    this->size = 0;
    this->maxSize = size;
}

Group::~Group() {
    clean();
}

Group::Group(const Group &from) {
    persons = new Person *[from.size];
    this->size = from.size;
    this->maxSize = from.maxSize;
    for (int i = 0; i < size; i++) {
        persons[i] = from.persons[i];
    }
}

void Group::add(Person *const person) {
    if (size >= maxSize)
        throw std::invalid_argument("Exceeded size of array");
    persons[size++] = person;
}

Person *Group::get(int index) {
    if (index >= size || index < 0)
        throw std::invalid_argument("Wrong index");
    return persons[index];
}

Group &Group::operator=(const Group &from) {
    clean();
    persons = new Person *[from.size];
    this->size = from.size;
    this->maxSize = from.maxSize;
    for (int i = 0; i < size; i++) {
        persons[i] = from.persons[i];
    }
    return *this;
}


Group &Group::operator=(Group &&from) {
    clean();
    this->size = from.size;
    this->maxSize = from.maxSize;
    this->persons = from.persons;
    return *this;
}

void Group::clean() {
    for (int i = 0; i < this->size; i++) {
        delete persons[i];
    }
    delete persons;
}