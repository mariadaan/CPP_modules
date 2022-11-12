#include "Dog.hpp"

/* Default constructor */
Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog constructed" << std::endl;
}

/* Copy constructor */
Dog::Dog(Dog &animal)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = animal;
}

/* Destructor */
Dog::~Dog(void)
{
	std::cout << "Dog destructed: " << this->_type << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "WOEF WOEF" << std::endl;
}
