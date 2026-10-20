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
    getline(ss, Student::streetAddress, ',');
    getline(ss, Student::city, ',');
    getline(ss, Student::state, ',');
    getline(ss, Student::zipCode, ',');
    getline(ss, Student::dateOfBirth, ',');
    getline(ss, Student::dateOfGraduation, ',');

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