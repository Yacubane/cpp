#ifndef TEST_DATA_H
#define TEST_DATA_H

class Data {
    int d;
    int m;
    int r;
    static int years;
public:
    Data ();
    Data (int d, int m, int r = 2000);
    int getYear() { return r; }
    void addYear() { r++; }
    bool isEarlier(Data &data);
    void wypisz();
    static int getYears();
    void wczytaj(std::istream& is);
    void zapisz(std::ostream& os);
};

#endif //TEST_DATA_H
