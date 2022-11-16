#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	// const Dog copyDog = dog;
	delete dog; // should not create a leak
	delete cat;
	// add more tests
	// - test copy: prove that its deep copy
	// - makesound for all types

	/*  create and fill an array of Animal objects. Half of it will
	be Dog objects and the other half will be Cat objects. At the end of your program
	execution, loop over this array and delete every Animal. You must delete directly dogs
	and cats as Animals. */

	Cat cat1, cat3;

	std::cout << "COPY CONSTRUCTOR" << std::endl;
	Cat cat2(cat1);

	std::cout << "COPY ASSIGNMENT CONSTRUCTOR" << std::endl;
	cat3 = cat1;

	return 0;
}
