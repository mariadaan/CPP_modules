#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void attack(void);
	void setName(std::string name);
	std::string getName(void);
	void setWeapon(Weapon &weapon);
	Weapon &getWeapon(void);

private:
	std::string _name;
	Weapon &_weapon;
};

#endif
