#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal(void);
	Animal(Animal &animal);
	Animal &operator=(Animal &animal);
	virtual ~Animal(void);

	std::string getType(void) const;

	virtual void makeSound(void) const; // zonder virtual is wrongWrongcat

protected:
	std::string _type;
};

#endif
