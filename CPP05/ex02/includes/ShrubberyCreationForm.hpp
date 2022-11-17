#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	virtual ~ShrubberyCreationForm(void);

	std::string getTarget(void) const;
	void execute(Bureaucrat const & executor) const;

	class UnsignedFormException : public std::exception
	{
	public:
		const char *what() const throw() { return "Form can not be executed, form not signed"; }
	};

private:
	std::string _target;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form);

#endif
