#ifndef CONTACT_H
#define CONTACT_H

#include "ISerializable.h"

class Contact : public ISerializable {
private:
	char* phone;
	char* city;
	char* country;

public:
	Contact(const char* phone, const char* city, const char* country);
	void Show() const;
	~Contact();

	std::ostream& Serialize(std::ostream& output) override {
		output << phone << "\n" << city << "\n" << country << "\n";
		return output;
	}

	std::istream& Deserialize(std::istream& input) override {
		phone = new char[100];
		city = new char[100];
		country = new char[100];
		input >> phone >> city >> country;
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

#endif // CONTACT_H
