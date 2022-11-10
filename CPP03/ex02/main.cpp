#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void printProperties(ClapTrap &clapTrapper)
{
	std::cout << clapTrapper.getName() << std::endl;
	std::cout << "hitpoints:	" << clapTrapper.getHitPoints() << std::endl;
	std::cout << "energypoints:	" << clapTrapper.getEnergyPoints() << std::endl;
	std::cout << "attackdamage:	" << clapTrapper.getAttackDamage() << std::endl;
}

int main(void)
{
	std::cout << "\nScavtrap named Karel:\n";
	ScavTrap karel("Karel");
	printProperties(karel);
	std::cout << "\nFragtrap named Gerda:\n";
	FragTrap gerda("Gerda");
	printProperties(gerda);
	gerda.highFivesGuys();
	gerda.attack("Karel");
	printProperties(gerda);
	gerda.takeDamage(900);
	printProperties(gerda);
	return 0;
}
