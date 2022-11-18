#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "    Testing construction and signing    " << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		Bureaucrat hans("Hans", 5);
		std::cout << hans;
		ShrubberyCreationForm shrubForm("Shrub");
		shrubForm.beSigned(hans);

		std::cout << "\n----------------------------------------" << std::endl;
		std::cout << "            Testing deep copy           " << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		ShrubberyCreationForm kopieShrubform(shrubForm); // test copy constructor
		ShrubberyCreationForm kopieShrubform2 = shrubForm; // test copy assignment constructor

		std::cout << shrubForm;
		std::cout << kopieShrubform;
		std::cout << kopieShrubform2;
		std::cout << "shrubForm target:           " << shrubForm.getTarget() << std::endl;
		std::cout << "kopieShrubform target:      " << kopieShrubform.getTarget() << std::endl;
		std::cout << "kopieShrubform2 target:     " << kopieShrubform2.getTarget() << std::endl;
		std::cout << "address of shrubForm:       " << &shrubForm << std::endl;
		std::cout << "address of kopieShrubform:  " << &kopieShrubform << std::endl;
		std::cout << "address of kopieShrubform2: " << &kopieShrubform2 << std::endl;

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
		ShrubberyCreationForm shrubForm("Shrub");
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
		ShrubberyCreationForm shrubForm("Shrub");
		shrubForm.beSigned(hans);
		shrubForm.execute(hans);
		RobotomyRequestForm robotomyForm("Roboto");
		robotomyForm.beSigned(hans);
		robotomyForm.execute(hans);
		PresidentialPardonForm presidentialForm("President");
		presidentialForm.beSigned(hans);
		presidentialForm.execute(hans);

		hans.executeForm(robotomyForm);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}

	Bureaucrat hans("Hans", 5);
	Bureaucrat erik("Erik", 138);
	PresidentialPardonForm presidentialForm("President");
	ShrubberyCreationForm shrubForm("Shrub");
	shrubForm.beSigned(hans);
	RobotomyRequestForm robotomyForm("Roboto");
	robotomyForm.beSigned(hans);
	std::cout << "\n----------------------------------------" << std::endl;
	std::cout << "        Testing failed execution        " << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	try
	{
		hans.executeForm(presidentialForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}
	presidentialForm.beSigned(hans);
	try
	{
		erik.executeForm(presidentialForm);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}
	try
	{
		erik.executeForm(shrubForm);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}
	try
	{
		erik.executeForm(robotomyForm);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}
	std::cout << "\n----------------------------------------" << std::endl;
	std::cout << "        Testing grade increase        " << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << erik;
	erik.incrementGrade();
	std::cout << erik;
	try
	{
		erik.executeForm(shrubForm);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception thrown: " << e.what() << std::endl;
	}
}


