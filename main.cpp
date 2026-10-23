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

int main() {
    std::vector<Student> studentVector;
    fillVector(studentVector, "students.csv");
    
    findStudent(studentVector);

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
        item.getName();
    }
}

bool sortByName(Student a, Student b) {
    return (a.getName() < b.getName());
}

void findStudent(std::vector<Student>& v) {
    std::string lastName = "";
    std::stringstream ss;

    std::cout << "Enter last name: ";
    std::cin >> lastName;

    for (auto& item : v) {
        std::string currentLastName = item.getLastName();

        if (lastName == currentLastName) {
            item.printStudent();
        }
    }
}