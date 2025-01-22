#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Contact.h"
#include "Collage.h"
#include "String.h"
 
class Student {
private:
    String fullName;
    String birthDate;
    Contact contact;
    College college;

public:
    Student(const String& fullName, const String& birthDate, const Contact& contact, const College& college);
    
    
    ~Student() = default;
    void Show() const;

};

#endif 