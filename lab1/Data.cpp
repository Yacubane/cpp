#include <iostream>
#include "Data.h"

int Data::years = 0;
Data::Data () {
    d = 1;
    m = 1;
    r = 2000;
}
Data::Data (int d, int m, int r) {
    Data::years += r;
    this->d = d;
    this->m= m;
    this->r = r;
    if(m < 1 || m > 12) {
        this->d = 1;
        this->m = 1;
        this->r = 2000;
    }
}

int Data::getYears() {
    return Data::years;
}

bool Data::isEarlier(Data &data) {
    if(data.r < this->r) return true;
    if(data.r == this->r && data.m < this->m) return true;
    if(data.r == this->r && data.m == this->m && data.d < this->d) return true;
    return false;
}


void Data::wypisz() {
    printf("Data: %02d.%02d.%d\n", d, m, r);
}

void Data::wczytaj(std::istream& is) {
    std::string string;
    is >> string;

    std::string year = string.substr(0, 4);
    std::string month = string.substr(5, 2);
    std::string day = string.substr(8, 2);

    r = atoi(year.c_str());
    m = atoi(month.c_str());
    d = atoi(day.c_str());

}

void Data::zapisz(std::ostream& os) {
    char buffer[20];
    int size = snprintf(buffer, 20, "%d-%02d-%02d", r, m, d);
    os.write(buffer, size);
}

