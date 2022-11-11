#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &diamondTrapper);
	DiamondTrap &operator=(DiamondTrap &diamondTrapper);
	~DiamondTrap(void);

	void attack(const std::string &target);
	void whoAmI(void);

private:
	std::string _name; // same name as in claptrap base class
};

#endif
