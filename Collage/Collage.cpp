#include"Collage.h"

College::College(const std::vector<Contact>& contacts, const std::string& name) : contacts(contacts), name(name) {}

void College::Show() const {
    std::cout << "College Name: " << name << std::endl;
    std::cout << "Contacts:" << std::endl;
    for (const auto& contact : contacts) {
        contact.Show();
    }
}

