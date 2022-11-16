#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "       Basic con/destruction tests      " << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << "Test animal sound: ";
	animal->makeSound();
	delete animal;
	delete dog;
	delete cat;

	std::cout << "----------------------------------------" << std::endl;
	std::cout << "         Array of animal objects        " << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}

	std::cout << "----------------------------------------" << std::endl;
	std::cout << "               Make sounds              " << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "           Destructing animals          " << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "            Testing deep copy           " << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	Cat cat1;
	cat1.getBrain()->_ideas[0] = "smullen lekker melk jaa";
	Cat cat2(cat1);
	Cat cat3 = cat1;

	std::cout << "address of cat1:        " << &cat1 << std::endl;
	std::cout << "address of cat2:        " << &cat2 << std::endl;
	std::cout << "address of cat3:        " << &cat3 << std::endl;
	std::cout << "address of brain(cat1): " << cat1.getBrain() << std::endl;
	std::cout << "address of brain(cat2): " << cat2.getBrain() << std::endl;
	std::cout << "address of brain(cat3): " << cat3.getBrain() << std::endl;
	std::cout << "address of ideas(cat1): " << cat1.getBrain()->_ideas << std::endl;
	std::cout << "address of ideas(cat2): " << cat2.getBrain()->_ideas << std::endl;
	std::cout << "address of ideas(cat3): " << cat3.getBrain()->_ideas << std::endl;

	std::cout << "----------------------------------------" << std::endl;
	std::cout << "          Give them some ideas          " << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "cat2s idea: " << cat2.getBrain()->_ideas[0] << std::endl;
	std::cout << "---------- Change cat2s idea -----------" << std::endl;
	cat2.getBrain()->_ideas[0] = "gadver ik lus geen melk";
	std::cout << "cat2s idea: " << cat2.getBrain()->_ideas[0] << std::endl;
	std::cout << "cat1s idea: " << cat1.getBrain()->_ideas[0] << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "cat3s idea: " << cat2.getBrain()->_ideas[0] << std::endl;
	std::cout << "---------- Change cat3s idea -----------" << std::endl;
	cat2.getBrain()->_ideas[0] = "gadver ik lus geen melk";
	std::cout << "cat3s idea: " << cat2.getBrain()->_ideas[0] << std::endl;
	std::cout << "cat1s idea: " << cat1.getBrain()->_ideas[0] << std::endl;

	return 0;
}
