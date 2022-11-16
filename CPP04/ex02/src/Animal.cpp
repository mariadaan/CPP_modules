#include "Animal.hpp"
#include "Brain.hpp"

/* Default constructor */
Animal::Animal(void) : _type("Animal base")
{
	std::cout << "Animal constructed" << std::endl;
}

/* Default constructor */
Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal constructed" << std::endl;
}

/* Copy constructor */
Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

/* Copy assignment constructor */
Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Animal copy assignment operator copied " << animal.getType() << std::endl;
	this->_type = animal.getType();
	return *this;
}

/* Destructor */
Animal::~Animal(void)
{
	std::cout << "Animal destructed: " << this->_type << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
