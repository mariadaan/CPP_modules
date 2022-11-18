#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	virtual ~Intern(void);

	Form *makeForm(std::string formName, std::string formTarget);
};

#endif
