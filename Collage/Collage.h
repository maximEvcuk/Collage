#ifndef COLLEGE_H
#define COLLEGE_H

#include <string>
#include <vector>
#include<iostream>
#include "Contact.h"

class College {
private:
	std::vector <Contact> contacts;
	std::string name;

public:
	College(const std::vector<Contact>& contacts, const std::string& name);
	void Show() const;

};


#endif // COLLEGE_H