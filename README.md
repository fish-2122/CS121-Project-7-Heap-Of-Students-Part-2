# CS121-Project-7-Heap-Of-Students-Part-2
### This is part 2 of the first heap of students project

```mermaid
classDiagram

class Date {
    - string date
    + Date()
    + init(string dateInput)
    + printDate()
}

class Address {
    - string streetAddress
    - string city
    - string state
    - string zipCode
    + Address()
    + init(string streetAddressInput, string townNameInput, string stateAbbreviationInput, string ipCodeInput)
    + printAddress()
}

class Student {
    - string studentString
    - string firstName
    - string lastName
    - string streetAddress
    - string city
    - string state
    - string zipCode
    - string dateOfBirth
    - string dateOfGraduation
    - string creditsS
    - int credits
    + Student()
    + init(string studentStringInput)
    + printStudent()
    + getLastFirst() : string
}
```

## Student::init(std::string studentStringInput)
```
put studentStringInput into studentString
clear ss and converter to make sure they are empty
put studentString into ss
use getline() with a comma delininator to give all the variables their values from the string
when we get to the credits part, instead of putting it directly into the credits variable, put it into creditsS. then put creditsS into converter, and then converter into credits. that makes it into an int
```
