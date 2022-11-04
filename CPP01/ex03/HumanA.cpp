#include "HumanA.hpp"

HumanA::HumanA(void)
{
	&_weapon = _weapon.getType();

	return;
}

HumanA::~HumanA(void)
{
	std::cout << _name << " is destroyed." << std::endl;
	return;
}
