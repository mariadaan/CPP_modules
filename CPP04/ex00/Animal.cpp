#include "Animal.hpp"

/* Default constructor */
Animal::Animal(void)
{
	this->_type = "Animal base";
	std::cout << "Animal constructed" << std::endl;
}

/* Copy constructor */
Animal::Animal(Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

/* Copy assignment constructor */
Animal &Animal::operator=(Animal &animal)
{
	std::cout << "Animal copy assignment operator copied " << animal.getType() << std::endl;
	// copy all values
	return animal;
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

void Animal::makeSound(void) const
{
	std::cout << "....." << std::endl;
}
