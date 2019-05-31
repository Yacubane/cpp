//
// Created by jakubdybczak on 5/27/19.
//

#ifndef LAB6_EXAMPLE_TREEKEY_H
#define LAB6_EXAMPLE_TREEKEY_H


#include <string>
#include <iostream>

class TreeKey {
private:
    std::string type;
    unsigned int age;
public:
    TreeKey(std::string type, unsigned int age) {
        this->type = type;
        this->age = age;
    }

    bool operator==(const TreeKey &other) const {
        return (type == other.type
                && age == other.age);
    }

//    std::size_t hashcode() const {
//        return ((std::hash<std::string>()(type)
//                 ^ (std::hash<int>()(age) << 1)));
//    }

//    std::size_t operator()() const {
//        return hashcode();
//    }


    bool operator<(const TreeKey &other) const {
        if (type < other.type) return true;
        if (type > other.type) return false;

        return age < other.age;
    }

    friend std::ostream &operator<<(std::ostream &stream, const TreeKey &tree) {
        stream << tree.type << " " << tree.age;
        return stream;
    }

};


#endif //LAB6_EXAMPLE_TREEKEY_H
