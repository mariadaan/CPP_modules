#include "ClapTrap.hpp"

void printProperties(ClapTrap &clapTrapper)
{
	std::cout << "----------------------" << std::endl;
	std::cout << clapTrapper.getName() << std::endl;
	std::cout << "hitpoints:	" << clapTrapper.getHitPoints() << std::endl;
	std::cout << "energypoints:	" << clapTrapper.getEnergyPoints() << std::endl;
	std::cout << "attackdamage:	" << clapTrapper.getAttackDamage() << std::endl;
	std::cout << "----------------------" << std::endl;
}

int main(void)
{
	ClapTrap maria("Maria");
	ClapTrap tessa("Tessa");
	ClapTrap mares("Mares");
	mares = tessa;

	printProperties(tessa);
	printProperties(maria);
	tessa.attack(maria.getName());
	printProperties(tessa);
	printProperties(maria);

	return 0;
}

/*
	Vragen:
	- hoe take damage doen
	- kost een attack ook energypoints als je geen attackdamage hebt
*/