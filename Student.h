#ifndef STUDENT_H
#define STUDENT_H

class Student {
    private:
        std::string studentString;
        std::string firstName;
        std::string lastName;
        std::string streetAddress;
        std::string city;
        std::string state;
        std::string zipCode;
        std::string dateOfBirth;
        std::string dateOfGraduation;
        std::string creditsS;
        int credits;
    public:
        Student();
        void init(std::string studentStringInput);
        void printStudent();
        std::string getLastFirst();
};

#endif