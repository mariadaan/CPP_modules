#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
	Animal(void);
	Animal(const std::string type);
	Animal(const Animal &animal);
	Animal &operator=(const Animal &animal);
	virtual ~Animal(void);

	std::string getType(void) const;

	virtual void makeSound(void) const;
	virtual Brain *getBrain(void) const;

protected:
	std::string _type;
};

#endif
