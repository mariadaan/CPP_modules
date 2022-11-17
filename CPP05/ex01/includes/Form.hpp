#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
public:
	Form(void);
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &other);
	Form &operator=(const Form &other);
	virtual ~Form(void);

	const std::string getName(void) const;
	bool getIsSigned(void) const;
	int getSignGrade() const;
	int getExecGrade() const;

	void beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Grade too high"; }
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Grade too low"; }
	};

private:
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _execGrade;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif
