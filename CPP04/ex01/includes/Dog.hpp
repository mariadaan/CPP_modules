#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(Dog &animal);
	Dog &operator=(const Dog &cat);
	~Dog(void);

	void makeSound(void) const;

private:
	Brain *_brain;
};

#endif
