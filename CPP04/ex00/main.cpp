#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Wrong/WrongAnimal.hpp"
#include "Wrong/WrongCat.hpp"

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
	delete myCat;

	std::cout << "\nWrongAnimal part:\n";
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << "WrongAnimal type:  " << wrongMeta->getType() << " " << std::endl;
	std::cout << "WrongCat type:     " << wrongCat->getType() << " " << std::endl;
	std::cout << "Cat sound: ";
	wrongCat->makeSound();
	std::cout << "Animal sound: ";
	wrongMeta->makeSound();
	delete wrongMeta;
	delete wrongCat;

	return 0;
}
