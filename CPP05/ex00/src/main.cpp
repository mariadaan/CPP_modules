#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	// Hans
	Bureaucrat hans("Hans", 5);
	try
	{
		std::cout << hans;
		hans.incrementGrade();
		std::cout << hans;
		for (int i = 0; i < 30; i++)
		{
			hans.incrementGrade();
			std::cout << hans;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}
	std::cout << hans;

	// Arnold
	try
	{
		Bureaucrat arnold("Arnold", 150);
		std::cout << arnold;
		arnold.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}

	// Bernard
	try
	{
		Bureaucrat bernard("Bernard", -8);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}
}
