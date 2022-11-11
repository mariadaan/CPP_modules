#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(Dog &animal);
	// Dog& operator=(Dog &animal);
	~Dog(void);

	void makeSound(void) const;

protected:
	std::string _type;

};

#endif
