#ifndef COLLEGE_H
#define COLLEGE_H

#include "ISerializable.h"


class College : public ISerializable {
private:
	std::vector <Contact> contacts;
	char* name;

public:
	College(const std::vector<Contact>& contacts, const char* name);
	~College();
	void Show() const;

};


#endif // COLLEGE_H