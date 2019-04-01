//
// Created by jakubik on 01.04.19.
//

#ifndef LAB3_EXAMPLE_GROUP_H
#define LAB3_EXAMPLE_GROUP_H


#include "Person.h"

class Group {
    Person **persons;
    int size;
    int maxSize;

public:
    Group(int size = 20);
    Group(const Group &from);
    ~Group();

    Group &operator=(const Group &group);
    Group &operator=(Group &&group);

    int getSize() { return size; }
    void add(Person *const person);
    Person *get(int index);
    void clean();

};


#endif //LAB3_EXAMPLE_GROUP_H
