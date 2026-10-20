#include <iostream>
#include "Address.h"
#include "Date.h"
#include "Student.h"

int main() {
    Date d;
    d.init("03/24/2003");
    d.printDate();

    Address a;
    a.init("505 Main St", "Townsville", "IN", "51254");
    a.printAddress();

    std::string studentString = "John,Smith,403 Main St,Townsville,IN,67493,02/22/2022,05/25/2030/,150";
    Student* s = new Student();
    s->init(studentString);
    s->printStudent();
    std::cout << s->getLastFirst() << std::endl;

    return 0;
}