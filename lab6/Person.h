//
// Created by jakubdybczak on 5/27/19.
//

#ifndef LAB6_EXAMPLE_TREE_H
#define LAB6_EXAMPLE_TREE_H


#include <string>
#include <iostream>

class Person {
private:
    std::string firstName;
    std::string lastName;
    unsigned int birthYear;

    std::string firstNames[3] = {"Olivier", "John", "Jacob"};
    std::string lastNames[3] = {"Williams", "Smith", "Johnson"};

public:
    Person() {
        birthYear = rand() % (2010 - 1950 + 1) + 1950;
        lastName = lastNames[rand() % (sizeof(lastNames) / sizeof(*lastNames))];
        firstName = firstNames[rand() % (sizeof(firstNames) / sizeof(*firstNames))];
    }

    Person(std::string firstName, std::string lastName, unsigned int birthYear)
            : firstName{firstName}, lastName{lastName}, birthYear{birthYear} {}

    std::string getKey() {
        return lastName + firstName;
    }

    bool operator==(const Person &other) const {
        return (firstName == other.firstName
                && lastName == lastName
                && birthYear == other.birthYear);
    }


    bool operator<(const Person &other) const {
        if (firstName < other.firstName) return true;
        if (firstName > other.firstName) return false;

        if (lastName < other.lastName) return true;
        if (lastName > other.lastName) return false;

        return birthYear < other.birthYear;
    }

    friend std::ostream &operator<<(std::ostream &stream, const Person &person) {
        stream << person.firstName << " " << person.lastName << " " << person.birthYear;
        return stream;
    }

    double getBirthYear() const { return birthYear; }

    void setBirthYear(unsigned int birthYear) { this->birthYear = birthYear; }

    std::string getFirstName() { return firstName; }

    std::string getLastName() const { return lastName; }
};


#endif //LAB6_EXAMPLE_TREE_H
