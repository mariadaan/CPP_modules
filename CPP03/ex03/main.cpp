#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

void printProperties(ClapTrap &clapTrapper)
{
	std::cout << clapTrapper.getName() << std::endl;
	std::cout << "hitpoints:	" << clapTrapper.getHitPoints() << std::endl;
	std::cout << "energypoints:	" << clapTrapper.getEnergyPoints() << std::endl;
	std::cout << "attackdamage:	" << clapTrapper.getAttackDamage() << std::endl;
}

int main(void)
{
	std::cout << "DiamondTrap named Bella:\n";
	DiamondTrap bella("Bella");
	std::cout << std::endl;
	bella.whoAmI();
	std::cout << std::endl;
	ScavTrap ricky("Ricky");
	printProperties(bella);
	bella.attack("Ricky");
	printProperties(bella);
	printProperties(ricky);
	ricky.takeDamage(bella.getAttackDamage());
	printProperties(ricky);
	ricky.beRepaired(5);
	printProperties(ricky);
	return 0;
}
