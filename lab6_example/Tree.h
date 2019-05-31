//
// Created by jakubdybczak on 5/27/19.
//

#ifndef LAB6_EXAMPLE_TREE_H
#define LAB6_EXAMPLE_TREE_H


#include <string>
#include <iostream>
#include "TreeKey.h"

class Tree {
private:
    std::string type;
    double diameter;
    unsigned int age;

    std::string species[3] = {"Dąb", "Brzoza", "Sosna"};

public:


public:
    Tree() {
        age = rand() % (100 - 1 + 1) + 1;
        diameter = 1.9 * (double) rand() / (double) (RAND_MAX) + 0.1;
        type = species[rand() % (sizeof(species) / sizeof(*species))];
    }

    Tree(std::string type, double diameter, unsigned int age) : type{type}, diameter{diameter}, age{age} {}

    TreeKey getKey() {
        return TreeKey(type, age);
    }

    bool operator==(const Tree &other) const {
        return (type == other.type
                && diameter == diameter
                && age == other.age);
    }

    void print() const {
        std::cout << type << " " << diameter << " " << age << std::endl;
    }

    std::size_t hashcode() const {
        return age;
    }

    bool operator<(const Tree &other) const {
        if (type < other.type) return true;
        if (type > other.type) return false;

        if (diameter < other.diameter) return true;
        if (diameter > other.diameter) return false;

        return age < other.age;
    }

    friend std::ostream &operator<<(std::ostream &stream, const Tree &tree) {
        stream << tree.type << " " << tree.diameter << " " << tree.age;
        return stream;
    }

    double getDiameter() const {
        return diameter;

    }
    void setDiameter(double diameter) {
        this->diameter = diameter;

    }

    std::string getType() const {
        return type;
    }
};


#endif //LAB6_EXAMPLE_TREE_H
