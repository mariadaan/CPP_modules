#include "AMateria.hpp"

/* Default constructor */
AMateria::AMateria(void)
{
	this->_type = "AMateria base";
	std::cout << "AMateria constructed" << std::endl;
}

/* Copy constructor */
AMateria::AMateria(AMateria &animal)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = animal;
}

/* Copy assignment constructor */
AMateria &AMateria::operator=(AMateria &animal)
{
	std::cout << "AMateria copy assignment operator copied " << animal.getType() << std::endl;
	this->_type = animal.getType();
	return animal;
}

/* Destructor */
AMateria::~AMateria(void)
{
	std::cout << "AMateria destructed: " << this->_type << std::endl;
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}
