#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	delete dog; // should not create a leak
	delete cat;
	// add more tests
	// - test copy: prove that its deep copy
	// - makesound for all types

	/*  create and fill an array of Animal objects. Half of it will
	be Dog objects and the other half will be Cat objects. At the end of your program
	execution, loop over this array and delete every Animal. You must delete directly dogs
	and cats as Animals. */
	return 0;
}
