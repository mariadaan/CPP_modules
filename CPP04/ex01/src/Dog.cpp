#include "Dog.hpp"

/* Default constructor */
Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructed" << std::endl;
}

/* Copy constructor */
Dog::Dog(Dog &dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

/* Destructor */
Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructed: " << this->_type << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "WOEF WOEF" << std::endl;
}
