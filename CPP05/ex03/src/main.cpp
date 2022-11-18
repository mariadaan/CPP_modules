#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Form* scf;
	scf = someRandomIntern.makeForm("shrubbery creation", "Holly");
	Form* ppf;
	ppf = someRandomIntern.makeForm("presidential pardon", "Willem");

	Form* nef;
	nef = someRandomIntern.makeForm("not existing form", "Piet");

	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "Test if forms can still be signed and executed:" << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	Bureaucrat hans("Hans", 5);
	ppf->beSigned(hans);
	hans.executeForm(*ppf);
}
