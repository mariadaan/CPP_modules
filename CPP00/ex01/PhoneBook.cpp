#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

int PhoneBook::execCmd(std::string cmd)
{
	if (cmd.compare("ADD") == 0)
		addContact();
	else if (cmd.compare("SEARCH") == 0)
		searchContact();
	else if (cmd.compare("EXIT") == 0)
		return 1;
	return 0;
}

void PhoneBook::addContact(void)
{
	contacts[numContacts % MAX_CONTACTS].getContactInfo();
	numContacts++;
	std::cout << "Successfully added contact!" << std::endl;
	return;
}

void printTableElement(std::string str)
{
	std::string printString;
	if (str.length() > 10)
	{
		printString = str.substr(0, 9);
		printString += ".";
	}
	else
		printString = str;
	std::cout << std::setw(10) << std::right << printString << "|";
}

void printContact(Contact contact)
{
	std::cout << "First Name:	" << contact.getFirstName() << std::endl;
	std::cout << "Last Name:	" << contact.getLastName() << std::endl;
	std::cout << "Nickname:	" << contact.getNickname() << std::endl;
	std::cout << "Phonenumber:	" << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret:	" << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::printPhoneBook(void)
{
	std::string fields[4] = {"Index", "First name", "Last name", "Nickname"};
	std::cout << "\n---------------------------------------------\n|";
	for (int i_field = 0; i_field < 4; i_field++)
		printTableElement(fields[i_field]);
	std::cout << "\n|----------|----------|----------|----------|\n";
	for (int i_contact = 0; i_contact < numContacts && i_contact < MAX_CONTACTS; i_contact++)
	{
		std::cout << "|";
		printTableElement(std::to_string(i_contact));
		printTableElement(contacts[i_contact].getFirstName());
		printTableElement(contacts[i_contact].getLastName());
		printTableElement(contacts[i_contact].getNickname());
		std::cout << std::endl;
	}
	std::cout << "---------------------------------------------\n";
	return;
}

bool check_number(std::string str)
{
	int str_len = str.length();
	for (int i = 0; i < str_len; i++)
		if (std::isdigit(str[i]) == false)
			return false;
	return true;
}

void PhoneBook::selectContact(void)
{
	int i_contact;
	std::string input;

	input = get_valid_input("Enter contact index:", "contact index");
	while (!check_number(input))
		input = get_valid_input("Invalid index. Enter contact index again:", "contact index");
	i_contact = stoi(input);
	while (i_contact < 0 || i_contact > MAX_CONTACTS - 1 || i_contact > numContacts - 1)
	{
		input = get_valid_input("Invalid index. Try again:", "contact index");
		i_contact = stoi(input);
	}
	printContact(contacts[i_contact]);
}

void PhoneBook::searchContact(void)
{
	if (numContacts == 0)
		return;
	printPhoneBook();
	selectContact();
	return;
}

PhoneBook::PhoneBook(void)
{
	numContacts = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}
