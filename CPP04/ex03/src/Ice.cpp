#include "Ice.hpp"

/* Default constructor */
Ice::Ice(void) : AMateria("Ice"), _type("ice")
{
	std::cout << "Ice constructed" << std::endl;
}

/* Copy constructor */
Ice::Ice(Ice &other) : AMateria(other)
{
	std::cout << "Ice copy constructor called" << std::endl;
	this->_type = other._type;
	*this = other;
}

/* Copy assignment constructor */
Ice &Ice::operator=( const Ice &other )
{
	std::cout << "Ice copy assignment called" << std::endl;
	this->_type = other._type;
	return (*this);
}

/* Destructor */
Ice::~Ice(void)
{
	std::cout << "Ice destructed: " << this->_type << std::endl;
}

AMateria *Ice::clone() const
{
	const AMateria *ice = new Ice();
	return ice;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
}
