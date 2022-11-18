#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
	virtual ~RobotomyRequestForm(void);

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
