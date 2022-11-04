#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

std::string get_valid_input(std::string prompt, std::string valueName);
std::string get_valid_cmd(std::string prompt);

class Contact
{
public:
	Contact(void);
	~Contact(void);
	void getContactInfo(void);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getPhoneNumber(void);
	std::string getDarkestSecret(void);

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

#endif
