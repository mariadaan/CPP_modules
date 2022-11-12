#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *myDog = new Dog();
	const Animal *myCat = new Cat();
	std::cout << "Dog type:  " << myDog->getType() << " " << std::endl;
	std::cout << "Cat type:  " << myCat->getType() << " " << std::endl;
	std::cout << "Cat sound: ";
	myCat->makeSound();
	std::cout << "Dog sound: ";
	myDog->makeSound();
	std::cout << "Animal sound: ";
	meta->makeSound();

	delete meta;
	delete myDog;
	return 0;
}
