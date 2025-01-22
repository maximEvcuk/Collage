#include "Student.h"
#include <cstring>

Student::Student(const char* fullName, const char* birthDate, const Contact& contact, const College& college) : contact(contact), college(college) {
   
    this->fullName = new char[strlen(fullName) + 1];
    strcpy(this->fullName, fullName);

    this->birthDate = new char[strlen(birthDate) + 1];
    strcpy(this->birthDate, birthDate);
}

Student::~Student() {
    delete[] fullName;
    delete[] birthDate;
}

void Student::Show() const {
    std::cout << "Full Name: " << fullName << ", Birth Date: " << birthDate << std::endl;
    contact.Show();
    college.Show();
}