#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>

#include "Person.h"

int searchBirthYear;

Person generator() {
    return Person();
}

bool countIfFunction(const Person &person) {
    return person.getBirthYear() == searchBirthYear;
}

bool findIfFunction(const Person &person) {
    return person.getBirthYear() == 2000;
}

bool sortFunction (const Person &person, const Person &person2) {
    if(person.getBirthYear() != person2.getBirthYear()) {
        return person.getBirthYear() < person2.getBirthYear();
    }
    return person.getLastName() < person2.getLastName();
}

bool sortLastNameFunction (const Person &person, const Person &person2) {
    return person.getLastName() < person2.getLastName();
}

bool uniqueFunction (const Person &person, const Person &person2) {
    return person.getLastName() == person2.getLastName();
}


int main() {
    srand(time(NULL));
    std::cout << "VECTOR TEST" << '\n';

    std::vector<Person> vector;
    vector.push_back(Person("Jakub", "Dybczak", 1998));
    vector.push_back(Person("Jakub", "Dybczak", 1998));
    vector.push_back(Person("Jakub", "Płotnikowski", 1998));
    vector.push_back(Person("Jakub", "Dybczak", 1998));

    for (std::vector<Person>::iterator it = vector.begin(); it != vector.end(); ++it)
        std::cout << *it << std::endl;

    std::cout << '\n';

    std::set<Person> set;

    //for (std::vector<Person>::iterator it = vector.begin() ; it != vector.end(); ++it)
    //    set.insert(*it);
    std::cout << "SET TEST" << '\n';

    set.insert(Person("Jakub", "Dybczak", 1998));
    set.insert(Person("Piotr", "Szczygieł", 1997));
    set.insert(Person("Jakub", "Płotnikowski", 1998));
    set.insert(Person("Jakub", "Dybczak", 1998));
    set.insert(Person());
    set.insert(Person());

    for (std::set<Person>::iterator it = set.begin(); it != set.end(); ++it)
        std::cout << *it << std::endl;

    std::cout << '\n';

    std::cout << "MAP TEST" << '\n';
    std::map<std::string, Person> map;
    Person tmp;
    tmp = Person("Jakub", "Dybczak", 1998);
    map.insert(std::pair<std::string, Person>(tmp.getKey(), tmp));
    tmp = Person("Jakub", "Dybczak", 1998);
    map.insert(std::pair<std::string, Person>(tmp.getKey(), tmp));
    tmp = Person("Piotr", "Szczygieł", 1997);
    map.insert(std::pair<std::string, Person>(tmp.getKey(), tmp));

    for (std::map<std::string, Person>::iterator it = map.begin(); it != map.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';

    std::cout << '\n';
    std::cout << "GENERATOR TEST" << '\n';

    std::vector<Person> vector2(20);
    std::generate(vector2.begin(), vector2.end(), generator);
    for (std::vector<Person>::iterator it = vector2.begin(); it != vector2.end(); ++it)
        std::cout << *it << std::endl;

    std::cout << '\n';

    std::cout << "FIND IF TEST" << '\n';
    std::vector<Person>::iterator it = std::find_if (vector2.begin(), vector2.end(), findIfFunction);
    if(it == vector2.end()) {
        std::cout << "Cannot find person with birth year 2000"<< '\n';
    } else {
        std::cout << "Person with birth year 2000: " << *it << '\n';
    }


    std::cout << "COUNT IF TEST" << '\n';
    std::cin >> searchBirthYear;
    int num = std::count_if(vector2.begin(), vector2.end(), countIfFunction);
    std::cout << "Num of items: " << num << std::endl;
    std::cout << '\n';

    std::cout << "SORT TEST" << '\n';
    std::sort (vector2.begin(), vector2.end(), sortFunction);
    for (std::vector<Person>::iterator it = vector2.begin(); it != vector2.end(); ++it)
        std::cout << *it << std::endl;
    std::cout << '\n';

    std::cout << "UNIQUE TEST" << '\n';
    std::sort (vector2.begin(), vector2.end(), sortLastNameFunction);
    it = std::unique (vector2.begin(), vector2.end(), uniqueFunction);
    vector2.resize(std::distance(vector2.begin(),it));
    for (std::vector<Person>::iterator it = vector2.begin(); it != vector2.end(); ++it)
        std::cout << *it << std::endl;

    std::cout << '\n';


    return 0;
}