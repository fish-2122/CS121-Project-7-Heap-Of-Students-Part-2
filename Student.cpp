#include <iostream>
#include <string>
#include <sstream>
#include "Student.h"

Student::Student() {
    Student::studentString = "";
    Student::firstName = "";
    Student::lastName = "";
    Student::streetAddress = "";
    Student::city = "";
    Student::state = "";
    Student::zipCode = "";
    Student::dateOfBirth = "";
    Student::dateOfGraduation = "";
    Student::creditsS = "";
    Student::credits = 0;
}

void Student::init(std::string studentStringInput) {
    Student::studentString = studentStringInput;
    
    std::stringstream ss;
    std::stringstream converter;
    converter.clear();
	converter.str("");
	ss.clear();
	ss.str("");

    ss.str(Student::studentString);

    getline(ss, Student::firstName, ',');
    getline(ss, Student::lastName, ',');
    Student::lastName.erase(0, lastName.find_first_not_of(" \t\n\r\f\v"));
    getline(ss, Student::streetAddress, ',');
    Student::streetAddress.erase(0, streetAddress.find_first_not_of(" \t\n\r\f\v"));
    getline(ss, Student::city, ',');
    Student::city.erase(0, city.find_first_not_of(" \t\n\r\f\v"));
    getline(ss, Student::state, ',');
    Student::state.erase(0, state.find_first_not_of(" \t\n\r\f\v"));
    getline(ss, Student::zipCode, ',');
    Student::zipCode.erase(0, zipCode.find_first_not_of(" \t\n\r\f\v"));
    getline(ss, Student::dateOfBirth, ',');
    Student::dateOfBirth.erase(0, dateOfBirth.find_first_not_of(" \t\n\r\f\v"));
    getline(ss, Student::dateOfGraduation, ',');
    Student::dateOfGraduation.erase(0, dateOfGraduation.find_first_not_of(" \t\n\r\f\v"));

    getline(ss, Student::creditsS, ',');
    converter << Student::creditsS;
    converter >> Student::credits;
}

void Student::printStudent() {
    std::cout << Student::firstName << std::endl;
    std::cout << Student::lastName << std::endl;
    std::cout << Student::streetAddress << std::endl;
    std::cout << Student::city << std::endl;
    std::cout << Student::state << std::endl;
    std::cout << Student::zipCode << std::endl;
    std::cout << Student::dateOfBirth << std::endl;
    std::cout << Student::dateOfGraduation << std::endl;
    std::cout << Student::credits << std::endl;
    std::cout << "-----------------------" << std::endl;
}

std::string Student::getLastFirst() {
    std::string returnString = Student::lastName + ", " + Student::firstName;
    return returnString;
}

std::string Student::getName() {
    std::string returnString = Student::firstName + ", " + Student::lastName;
    return returnString;
}

std::string Student::getLastName() {
    return Student::lastName;
}