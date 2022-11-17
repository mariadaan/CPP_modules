#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	// Hans
	try
	{
		Bureaucrat hans("Hans", 5);
		Bureaucrat karel("Karel", 80);
		std::cout << hans;
		Form contract("contract", 10, 20);
		std::cout << contract;
		contract.beSigned(hans);
		std::cout << contract;
		contract.beSigned(karel);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}

	// invalid form
	try
	{
		Form invalid("invalid", 1, 300);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
