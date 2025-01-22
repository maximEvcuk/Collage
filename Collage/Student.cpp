#include "Student.h"

Student::Student(const String& fullName, const String& birthDate, const Contact& contact, const College& college) : fullName(fullName), birthDate(birthDate), contact(contact), college(college) {}

Student::Student(Student&& other) noexcept : fullName(std::move(other.fullName)), birthDate(std::move(other.birthDate)), contact(std::move(other.contact)), college(std::move(other.college)) {}


Student& Student::operator=(Student&& other) noexcept {
    if (this != &other) {
        fullName = std::move(other.fullName);
        birthDate = std::move(other.birthDate);
        contact = std::move(other.contact);
        college = std::move(other.college);
    }
    return *this;


}

void Student::Show() const {
    std::cout << "Full Name: " << fullName << ", Birth Date: " << birthDate << std::endl;
    contact.Show();
    college.Show();
}