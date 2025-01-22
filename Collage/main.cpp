#include <iostream>
#include <vector>
#include "Contact.h"

int main() {

	Contact contact1("123-456-7890", "Kyiv", "Ukraine");
	Contact contact2("123-456-0987", "Lviv", "Ukraine");

	std::vector <Contact> contacts = { contact1, contact2 };


	
 
	return 0;
}
