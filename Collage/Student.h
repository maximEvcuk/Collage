#ifndef STUDENT_H
#define STUDENT_H

#include "ISerializable.h"

class Student {
private:
    String fullName;
    String birthDate;
    Contact contact;
    College college;

public:
    Student(const String& fullName, const String& birthDate, const Contact& contact, const College& college);
    
    Student(Student&& other) noexcept;
    Student& operator=(Student&& other) noexcept;

    ~Student() = default;
    void Show() const;

};

#endif 