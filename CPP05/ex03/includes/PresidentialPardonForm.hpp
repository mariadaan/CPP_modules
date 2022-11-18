#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	virtual ~PresidentialPardonForm(void);

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

#endif
