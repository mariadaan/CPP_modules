#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName())
{
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {}

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Execution failed." << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName();
	os << ", bureaucrat grade ";
	os << bureaucrat.getGrade();
	os << ".\n";
	return os;
}
