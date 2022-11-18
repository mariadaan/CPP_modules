#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	virtual ~Bureaucrat(void);

	const std::string getName(void) const;
	int getGrade(void) const;

	void incrementGrade(void);
	void decrementGrade(void);

	void executeForm(Form const &form);

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw() { return "Bureaucrat grade too high"; }
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw() { return "Bureaucrat grade too low"; }
	};

private:
	const std::string _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
