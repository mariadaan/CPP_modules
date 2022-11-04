#include <iostream>
#include "Contact.hpp"

std::string Contact::getFirstName(void)
{
	return (this->firstName);
}
std::string Contact::getLastName(void)
{
	return (this->lastName);
}
std::string Contact::getNickname(void)
{
	return (this->nickname);
}
std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}
std::string Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

std::string get_valid_input(std::string prompt, std::string valueName)
{
	std::string str;

	std::cout << prompt << "	";
	std::getline(std::cin, str);
	bool whitespace = std::all_of(str.begin(), str.end(), isspace);
	while (str.empty() || whitespace)
	{
		std::cout << "Can not be empty. Please insert " << valueName << " again:	";
		std::getline(std::cin, str);
		whitespace = std::all_of(str.begin(), str.end(), isspace);
	}
	return str;
}

std::string get_valid_cmd(std::string prompt)
{
	std::string str;
	std::string valid_cmds[3] = {"ADD", "SEARCH", "EXIT"};
	std::cout << prompt << "	";
	std::getline(std::cin, str);
	bool whitespace = std::all_of(str.begin(), str.end(), isspace);
	bool is_valid_cmd = std::find(std::begin(valid_cmds), std::end(valid_cmds), str) != std::end(valid_cmds);
	while (str.empty() || whitespace || !is_valid_cmd)
	{
		std::cout << prompt << "	";
		std::getline(std::cin, str);
		whitespace = std::all_of(str.begin(), str.end(), isspace);
		is_valid_cmd = std::find(std::begin(valid_cmds), std::end(valid_cmds), str) != std::end(valid_cmds);
	}
	return str;
}

void Contact::getContactInfo(void)
{
	firstName = get_valid_input("First name:", "first name");
	lastName = get_valid_input("Last name:", "last name");
	nickname = get_valid_input("Nickname:", "nickname");
	phoneNumber = get_valid_input("Phone number:", "phone number");
	darkestSecret = get_valid_input("Darkest secret:", "darkest secret");
}

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}
