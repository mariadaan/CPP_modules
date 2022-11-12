#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
// #include "Dog.hpp"

int main(void)
{
	// const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	// delete dog; // should not create a leak
	delete cat;
	// ...
	return 0;
}
