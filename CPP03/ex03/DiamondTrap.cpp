#include "DiamondTrap.hpp"

/* Default constructor */
DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructed: " << std::endl;
	this->_name = "";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

/* Constructor */
DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructed: " << name << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

/* Copy constructor */
DiamondTrap::DiamondTrap(DiamondTrap &diamondTrapper) : ClapTrap(diamondTrapper), ScavTrap(diamondTrapper), FragTrap(diamondTrapper)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = diamondTrapper;
}

/* Copy assignment constructor */
DiamondTrap &DiamondTrap::operator=(DiamondTrap &diamondTrapper)
{
	std::cout << "DiamondTrap copy assignment operator copied " << diamondTrapper.getName() << std::endl;
	this->_name = diamondTrapper.getName();
	this->_hitPoints = diamondTrapper.getHitPoints();
	this->_energyPoints = diamondTrapper.getEnergyPoints();
	this->_attackDamage = diamondTrapper.getAttackDamage();
	return diamondTrapper;
}

/* Destructor */
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructed: " << this->_name << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << this->_name << ", aka " << ClapTrap::_name << std::endl;
}
