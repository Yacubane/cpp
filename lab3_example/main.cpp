#include <iostream>
#include "Group.h"


int main() {
    Group group(10);
    group.add(new Person("Test1", 12));
    group.add(new Person("Test2", 13));

    Group group2(10);
    group2.add(new Person("Test21", 12));
    group2.add(new Person("Test22", 13));

    group = group2;

    std::cout << group.get(1)->getName() << std::endl;


    return 0;
}