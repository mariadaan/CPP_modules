#include "Weapon.hpp"
// #include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	HumanB personB;
	personB.setName("person B");
	Weapon *bWeapon = new Weapon();
	personB.setWeapon(*bWeapon);
	personB.attack();
	delete bWeapon;
	return (0);
}
