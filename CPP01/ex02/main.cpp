/* Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: A pointer to the string.
• stringREF: A reference to the string.
Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF. */

#include <iostream>

int main(void)
{
	std::string welcome = "HI THIS IS BRAIN";
	std::string *stringPTR = &welcome;
	std::string &stringREF = welcome;

	std::cout << "Address of welcome (original):		" << &welcome << std::endl;
	std::cout << "Address of welcome (by pointer):	" << stringPTR << std::endl;
	std::cout << "Address of welcome (by reference):	" << &stringREF << std::endl;

	std::cout << "Value of welcome (original):		" << welcome << std::endl;
	std::cout << "Value of welcome (by pointer):		" << *stringPTR << std::endl;
	std::cout << "Value of welcome (by reference):	" << stringREF << std::endl;
	return (0);
}
