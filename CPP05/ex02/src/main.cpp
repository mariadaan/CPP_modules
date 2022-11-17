#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "    Testing construction and signing    " << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		Bureaucrat hans("Hans", 5);
		std::cout << hans;
		ShrubberyCreationForm shrubForm("kees");
		shrubForm.beSigned(hans);

		std::cout << "----------------------------------------" << std::endl;
		std::cout << "            Testing deep copy           " << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		ShrubberyCreationForm kopieShrubform(shrubForm); // test copy constructor
		ShrubberyCreationForm kopieShrubform2 = shrubForm; // test copy assignment constructor

		std::cout << shrubForm;
		std::cout << "shrubForm target: " << shrubForm.getTarget() << std::endl;
		std::cout << kopieShrubform;
		std::cout << "kopieShrubform target: " << kopieShrubform.getTarget() << std::endl;
		std::cout << kopieShrubform2;
		std::cout << "kopieShrubform2 target: " << kopieShrubform2.getTarget() << std::endl;
		std::cout << "\n----------------------------------------" << std::endl;
		std::cout << "       Testing failed execution      " << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		Bureaucrat loser("Loser", 150);
		shrubForm.execute(loser);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat hans("Hans", 5);
		ShrubberyCreationForm shrubForm("kees");
		shrubForm.execute(hans);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n----------------------------------------" << std::endl;
		std::cout << "       Testing successful execution      " << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		Bureaucrat hans("Hans", 5);
		ShrubberyCreationForm shrubForm("kees");
		shrubForm.beSigned(hans);
		shrubForm.execute(hans);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}
	
	


}


