#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name(""), _isSigned(false), _signGrade(150), _execGrade(150){}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw(Form::GradeTooHighException());
	else if (signGrade > 150 || execGrade > 150)
		throw(Form::GradeTooLowException());
}

Form::Form(const Form &other) : _name(other.getName()), _isSigned(other.getIsSigned()), _signGrade(other.getSignGrade()), _execGrade(other.getExecGrade())
{
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	this->_isSigned = other.getIsSigned();
	return (*this);
}

Form::~Form(void) {}

const std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

int Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExecGrade() const
{
	return (this->_execGrade);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_signGrade)
	{
		this->_isSigned = true;
		std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
	}
	else
	{
		std::cout << bureaucrat.getName() << " couldn't sign " << this->_name;
		std::cout << " because " << bureaucrat.getName() << "'s grade is too low" << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	if (form.getIsSigned())
		os << "Signed form ";
	else
		os << "Unsigned form ";
	os << form.getName();
	os << ", grade required to sign ";
	os << form.getSignGrade();
	os << ", grade required to execute ";
	os << form.getExecGrade();
	os << ".\n";
	return os;
}
