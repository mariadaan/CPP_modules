#include "AMateria.hpp"

/* Default constructor */
AMateria::AMateria(void) : _type("AMateria base")
{
	std::cout << "AMateria constructed" << std::endl;
}

/* Constructor */
AMateria::AMateria(const std::string &type) : _type(&type)
{
	std::cout << "AMateria constructed" << std::endl;
}

/* Copy constructor */
AMateria::AMateria(AMateria &other)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	this->_type = other.getType();
	// *this = other;
}

/* Copy assignment constructor */
AMateria &AMateria::operator=(AMateria &other)
{
	//While assigning a Materia to another, copying the type doesn’t make sense.
	std::cout << "AMateria copy assignment operator copied " << other.getType() << std::endl;
	// this->_type = other.getType();
	return *this;
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
