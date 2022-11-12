#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal &animal);
	WrongAnimal &operator=(WrongAnimal &animal);
	virtual ~WrongAnimal(void);

	std::string getType(void) const;

	virtual void makeSound(void) const; // zonder virtual is wrongWrongCat

protected:
	std::string _type;
};

#endif
