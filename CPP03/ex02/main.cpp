#include "ClapTrap.hpp"
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
	std::cout << "\nClaptrap named Maria:\n";
	ClapTrap maria("Maria");
	printProperties(maria);
	maria.attack("Harry");
	// maria.guardGate(); // not possible!

	std::cout << "\nUnnamed Claptrap:\n";
	ClapTrap noname;
	noname.attack("someone");

	std::cout << "\nUnnamed Scavtrap:\n";
	ScavTrap unnamed;
	unnamed.attack("someone");

	std::cout << "\nScavtrap named Gerda:\n";
	ScavTrap gerda("Gerda");
	printProperties(gerda);
	std::cout << "\nScavtrap named Karel:\n";
	ScavTrap karel("Karel");
	printProperties(karel);
	std::cout << "\nKarel's gateKeeperMode: " << karel.getGateKeeperMode() << std::endl;
	karel.guardGate();
	std::cout << "Karel's gateKeeperMode: " << karel.getGateKeeperMode() << std::endl << std::endl;
	karel.attack("Gerda");
	printProperties(karel);
	gerda.takeDamage(karel.getAttackDamage());
	printProperties(gerda);
	std::cout << "\nScavtrap named Kareltje:\n";
	ScavTrap kareltje("Kareltje");
	kareltje = karel;
	printProperties(kareltje);



	return 0;
}
