#include <iostream>
#include <string>
#include <sstream>
#include "Date.h"

Date::Date() {
    Date::dateString = "";
    Date::day = "";
    Date::month = "";
    Date::year = "";
}

void Date::init(std::string dateInput) {
    Date::dateString = dateInput;

    std::sstream ss;
    ss.str(dateString);

    getline(ss, Date::day, ',');
    getline(ss, Date::month, ',');
    getline(ss, Date::year);
}

void Date::printDate() {
    std::cout << Date::date << std::endl;
}