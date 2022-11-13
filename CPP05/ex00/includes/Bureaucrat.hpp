#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat &bureaucrat);
	Bureaucrat &operator=(Bureaucrat &bureaucrat);
	virtual ~Bureaucrat(void);

	class GradeTooHighException
	{
	public:
		const char *what() const throw() { return "Grade too low"; }
	};

	class GradeTooLowException
	{
	};

private:
	const std::string _name;
	int _grade;
};

#endif
