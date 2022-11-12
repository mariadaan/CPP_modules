#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(Cat &cat);
	~Cat(void);

	void makeSound(void) const;
};

#endif
