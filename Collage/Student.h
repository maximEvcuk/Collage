#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

#include "Contact.h"
#include "Collage.h"

class Student {
private:
    std::string fullName;
    std::string birthDate;
    Contact contact;
    College college;

public:
    Student(const std::string& fullName, const std::string& birthDate, const Contact& contact, const College& college);
    void Show() const;
};

#endif 