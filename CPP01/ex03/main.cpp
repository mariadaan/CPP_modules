#include "Weapon.hpp"
// #include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	std::cout << "------- Person B -------" << std::endl;
	HumanB personB;
	personB.setName("person B");
	personB.attack();
	Weapon *bWeapon = new Weapon();
	personB.setWeapon(*bWeapon);
	personB.attack();
	delete bWeapon;

	std::cout << std::endl << "------- Person A -------" << std::endl;



	return (0);
}
