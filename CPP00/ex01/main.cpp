#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook myPhonebook;

	std::cout << "Welcome to your phonebook!" << std::endl;
	while (1)
	{
		std::string cmd;
		int exit_program;

		cmd = get_valid_cmd("Please enter a command (ADD, SEARCH or EXIT): ");
		exit_program = myPhonebook.execCmd(cmd);
		if (exit_program)
			break;
		cmd.clear();
	}
	return 0;
}
