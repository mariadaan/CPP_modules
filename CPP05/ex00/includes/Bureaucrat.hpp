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
		GradeTooHighException(const std::string &msg) : _msg(msg) {}
		~GradeTooHighException() {}
		std::string getHighMsg() const {return this->_msg}
	private:
		std::string _msg;
	};

	class GradeTooLowException
	{
		GradeTooLowException(const std::string &msg) : _msg(msg) {}
		~GradeTooLowException() {}
		std::string getLowMsg() const {return this->_msg}
	private:
		std::string _msg;
	};

private:
	const std::string _name;
	int _grade;
};

#endif
