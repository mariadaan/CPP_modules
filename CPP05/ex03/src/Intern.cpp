#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern(void) {}

int getFormIndex(std::string formName)
{
	if (formName.empty())
		return -1;
	std::string forms[3] = {"presidential", "robotomy", "shrub"};
	for (int i = 0; i < 3; i++)
	{
		if (formName.find(forms[i]) != std::string::npos)
			return i;
	}
	return -1;
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{
	Form *newForm = NULL;
	switch (getFormIndex(formName))
	{
	case 0:
	{
		newForm = new PresidentialPardonForm(formTarget);
		break;
	}
	case 1:
	{
		newForm = new RobotomyRequestForm(formTarget);
		break;
	}
	case 2:
	{
		newForm = new ShrubberyCreationForm(formTarget);
		break;
	}
	default:
	{
		std::cerr << formName << " does not exist" << std::endl;
		break;
	}
	}
	std::cout << "Intern creates " << formName << " with target " << formTarget << std::endl;
	return newForm;
}
