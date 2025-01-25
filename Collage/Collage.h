#ifndef COLLEGE_H
#define COLLEGE_H

#include"ISerializable.h" 

class College : public ISerializable {
private:
	std::vector <Contact> contacts;
	char* name;

public:
	College(const std::vector<Contact>& contacts, const char* name);
	~College();
	void Show() const;

    std::ostream& Serialize(std::ostream& output) override {
        output << name << "\n";
        output << contacts.size() << "\n";
        for (const auto& contact : contacts) {
            contact.Serialize(output);
        }
        return output;
    }

    std::istream& Deserialize(std::istream& input) override {
        delete[] name;
        std::string tempName;
        input >> tempName;
        name = new char[tempName.length() + 1];
        strcpy(name, tempName.c_str());

        size_t size;
        input >> size;
        contacts.resize(size);
        for (auto& contact : contacts) {
            contact.Deserialize(input);
        }
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


#endif // COLLEGE_H