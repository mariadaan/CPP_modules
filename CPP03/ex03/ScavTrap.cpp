#include "ScavTrap.hpp"

/* Default constructor */
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructed: " << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateKeeperMode = false;
}

/* Constructor */
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructed: " << name << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_gateKeeperMode = false;
}

/* Copy constructor */
ScavTrap::ScavTrap(ScavTrap &scavTrapper)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = scavTrapper;
}

/* Copy assignment constructor */
ScavTrap &ScavTrap::operator=(ScavTrap &scavTrapper)
{
	std::cout << "ScavTrap copy assignment operator copied " << scavTrapper.getName() << std::endl;
	this->_name = scavTrapper.getName();
	this->_hitPoints = scavTrapper.getHitPoints();
	this->_energyPoints = scavTrapper.getEnergyPoints();
	this->_attackDamage = scavTrapper.getAttackDamage();
	this->_gateKeeperMode = scavTrapper.getGateKeeperMode();
	return scavTrapper;
}

/* Destructor */
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructed: " << this->_name << std::endl;
}

bool ScavTrap::getGateKeeperMode(void)
{
	return (this->_gateKeeperMode);
}

/*
	target: (happens in takedamage)
	- loses attackDamage amount hitPoints (hitPoints - attackDamage)

	ScavTrap (this):
	- loses 1 energy point
*/
void ScavTrap::attack(const std::string &target)
{
	std::string str;

	if (this->_energyPoints > 0)
	{
		str = "ScavTrap <name> attacks <target>, causing <damage> points of damage.\n";
		str.replace(str.find("<name>"), 6, this->_name);
		str.replace(str.find("<target>"), 8, target);
		str.replace(str.find("<damage>"), 8, std::to_string(this->_attackDamage));
		std::cout << str;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " does not have enough energy points to attack" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	this->_gateKeeperMode = true;
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
