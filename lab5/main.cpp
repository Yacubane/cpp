#include <iostream>
#include <cstring>

#include "List.h"

template<class T>
T sum(T a, T b) {
    return a + b;
}

template<>
const char *sum<const char *>(const char *a, const char *b) {
    char* ret = static_cast<char *>(malloc(strlen(a) + strlen(b) + 1));
    strcpy(ret, a);
    strcat(ret, b);
    ret[strlen(a) + strlen(b)] = '\0';
    return ret;
}

int main() {

    std::cout << sum(1, 2) << std::endl;
    const char *textSum = sum("C", "++");
    std::cout << textSum << std::endl;
    delete[] textSum;

    List<int> list;
    list.insert(1);
    list.insert(2);
    list.insert(3);

    std::cout << "test1" << std::endl;
    std::cout << list << std::endl;
    list.removeFirst();

    std::cout << "test2" << std::endl;
    std::cout << list << std::endl;
    return 0;
}