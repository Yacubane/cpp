//
// Created by jakubik on 09.04.19.
//

#ifndef LAB4_DATE_H
#define LAB4_DATE_H


#include <iostream>
namespace SellingSystem {

    class Date {
    private:
        int year, month, day;

        Date() = delete;

    public:
        Date(int _year, int _month, int _day) : year(_year), month(_month), day(_day) {}

        void setYear(int year) { this->year = year; }

        int getYear() const { return year; }

        bool save(std::ostream &ostream) const {
            ostream << year << "-" << month << "-" << day;
            return !ostream.fail();
        }

        bool load(std::istream &istream) {
            istream >> year >> month >> day;
            return !istream.fail();
        }

        friend std::ostream &operator<<(std::ostream &ostream, const Date &date) {
            date.save(ostream);
            return ostream;
        }

    };
}

#endif //LAB4_DATE_H
