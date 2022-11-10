#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap &fragTrapper);
	FragTrap &operator=(FragTrap &fragTrapper);
	~FragTrap(void);

	void attack(const std::string &target);
	void highFivesGuys(void);
};

#endif
