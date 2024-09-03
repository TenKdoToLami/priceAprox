#include "date.h"


Date::Date(int _day, int _month, int _year)
    : day(_day), month(_month), year(_year) {}



Date & Date::operator = (const Date & other)
{
    day = other.day;
    month = other.month;
    year = other.year;
    return;
}
