#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

#define MAX_CONTACTS 8

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	int execCmd(std::string cmd);
	void addContact(void);
	void searchContact(void);
	void selectContact(void);
	void printPhoneBook(void);

private:
	Contact contacts[MAX_CONTACTS];
	int numContacts;
};

#endif
