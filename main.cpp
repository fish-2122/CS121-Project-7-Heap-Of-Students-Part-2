#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "Address.h"
#include "Date.h"
#include "Student.h"

void fillVector(std::vector<Student>& v, std::string fileName);
void printVector(std::vector<Student>& v);

int main() {
    std::vector<Student> studentVector;
    fillVector(studentVector, "students.csv");
    printVector(studentVector);

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