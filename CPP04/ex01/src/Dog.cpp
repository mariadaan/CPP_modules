#include "Dog.hpp"

/* Default constructor */
Dog::Dog(void) : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog constructed" << std::endl;
}

/* Copy constructor */
Dog::Dog(Dog &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = dog;
}

/* Copy assignment constructor */
Dog &Dog::operator=( const Dog &dog )
{
	std::cout << "Dog copy assignment called" << std::endl;
	this->_type = dog._type;
	this->_brain = new Brain(*dog._brain);
	return (*this);
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
