#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form::Form("ShrubberyCreationForm", 145, 137), _target(target + "_shrubbery"){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)
{
	this->_target = other._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->_target = other._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw ShrubberyCreationForm::UnsignedFormException();
	if (executor.getGrade() > this->getExecGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;

}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form)
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
