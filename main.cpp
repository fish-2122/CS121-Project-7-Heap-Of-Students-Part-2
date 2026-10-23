#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Address.h"
#include "Date.h"
#include "Student.h"

void fillVector(std::vector<Student>& v, std::string fileName);
void printVector(std::vector<Student>& v);
void printStudentNames(std::vector<Student>& v);
bool sortByName(Student a, Student b);
void findStudent(std::vector<Student>& v);
void printMenu();


int main() {
    std::vector<Student> studentVector;
    fillVector(studentVector, "students.csv");

    bool keepGoing = true;
    while (keepGoing) {
        char userInput;
        printMenu();
        
        std::cin >> userInput;
        if (userInput == '0') {
            keepGoing = false;
        } else if (userInput == '1') {
            printStudentNames(studentVector);
        } else if (userInput == '2') {
            printVector(studentVector);
        } else if (userInput == '3') {
            findStudent(studentVector);
        } else {
            std::cout << "Not a valid input" << std::endl;
        }
    }

    return 0;
}



void fillVector(std::vector<Student>& v, std::string fileName) {
    std::string currentLine;
    std::ifstream inFile;

    inFile.open(fileName);
    while (getline(inFile, currentLine)) {
        v.push_back(Student());
        v.back().init(currentLine);
    }

}

void printVector(std::vector<Student>& v) {
    for (auto& item : v) {
        item.printStudent();
    }
}

void printStudentNames(std::vector<Student>& v) {
    std::sort(v.begin(), v.end(), sortByName);

    for (auto& item : v) {
        std::cout << item.getName() << std::endl;
    }
}

bool sortByName(Student a, Student b) {
    return (a.getLastName() < b.getLastName());
}

void findStudent(std::vector<Student>& v) {
    std::string lastName = "";
    std::stringstream ss;
    bool foundStudent = false;

    std::cout << "Enter last name: ";
    std::cin >> lastName;

    for (auto& item : v) {
        std::string currentLastName = item.getLastName();

        if (lastName == currentLastName) {
            item.printStudent();
            foundStudent = true;
        }
    }
    if (!foundStudent) {
            std::cout << "No student found" << std::endl;
        }
}

void printMenu() {
    std::cout << "0) Quit" << std::endl;
    std::cout << "1) Print all student names" << std::endl;
    std::cout << "2) Print all student data" << std::endl;
    std::cout << "3) Find a student" << std::endl;
    std::cout << "Input: ";
}