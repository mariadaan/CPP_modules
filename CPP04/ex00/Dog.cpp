#include "Dog.hpp"

/* Default constructor */
Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog default constructed" << std::endl;
}

/* Copy constructor */
Dog::Dog(Dog &animal)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = animal;
}

/* Copy assignment constructor */
// Dog& Dog::operator=(Dog &animal)
// {
// 	std::cout << "Dog copy assignment operator copied " << animal.getType() << std::endl;
// 	// copy all values
// 	return animal;
// }

/* Destructor */
Dog::~Dog(void)
{
	std::cout << "Dog destructed: " << this->_type << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "WOEF WOEF" << std::endl;
}
