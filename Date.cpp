#include <iostream>
#include <string>
#include "Date.h"

Date::Date() {
    Date::date = "";
}

void Date::init(std::string dateInput) {
    Date::date = dateInput;
}

void Date::printDate() {
    std::cout << Date::date << std::endl;
}