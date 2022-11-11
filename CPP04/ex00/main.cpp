#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* myDog = new Dog();
	// const Animal* myCat = new Cat();
	std::cout << myDog->getType() << " " << std::endl;
	// std::cout << myCat->getType() << " " << std::endl;
	// myCat->makeSound(); //will output the cat sound!
	myDog->makeSound();
	meta->makeSound();

	delete meta;
	delete myDog;
	// hoe ook Dog van dog destructen?

	return 0;
}
