#include "Collage.h"
#include <cstring>
 
College::College(const std::vector<Contact>& contacts, const char* name) : contacts(contacts) {
    this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

College::~College() {
	delete[] name;
}

void College::Show() const {
    std::cout << "College Name: " << name << std::endl;
    std::cout << "Contacts:" << std::endl;
    for (const auto& contact : contacts) {
        contact.Show();
    }
}

