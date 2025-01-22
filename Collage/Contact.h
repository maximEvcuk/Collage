#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <cstring>

class Contact {
private:
	char* phone;
	char* city;
	char* country;

public:
	Contact(const char* phone, const char* city, const char* country);
	void Show() const;
	~Contact();
};

#endif // CONTACT_H
