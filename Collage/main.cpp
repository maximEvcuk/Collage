#include <iostream>
#include <vector>
#include "Contact.h"
#include "Collage.h"
#include "Student.h"


int main() {

	Contact contact1("123-456-7890", "Kyiv", "Ukraine");
	Contact contact2("098-765-4321", "Lviv", "Ukraine");

	std::vector<Contact> contacts = { contact1, contact2 };
	College college1(contacts, "National University");


	Student student1("Ivan Ivanov", "01-01-2000", contact1, college1);
	student1.Show();
 
	return 0;
}
