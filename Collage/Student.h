#ifndef STUDENT_H
#define STUDENT_H

#include "ISerializable.h"

class Student : public ISerializable {
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

    std::ostream& Serialize(std::ostream& output) override {
        output << fullName << "\n" << birthDate << "\n";
        contact.Serialize(output);
        college.Serialize(output);
        return output;
    }

    std::istream& Deserialize(std::istream& input) override {
        input >> fullName >> birthDate;
        contact.Deserialize(input);
        college.Deserialize(input);
        return input;

    }

    std::ostream& Serialize(std::string& path) override {
        std::ofstream file(path);
        if (file.is_open()) {
            return Serialize(file);
        }
        return std::cout;
    }

    std::istream& Deserialize(std::string& path) override {
        std::ifstream file(path);
        if (file.is_open()) {
            return Deserialize(file);
        }
        return std::cin;

    }

    std::ostream& Serialize() override {
        return Serialize(std::cout);
    }

    std::istream& Deserialize() override {
        return Deserialize(std::cin);
    }


};

#endif 