#include "Weapon.hpp"
// #include "HumanA.hpp"
#include "HumanB.hpp"

// int main(void)
// {
// 	std::cout << "------- Person B -------" << std::endl;
// 	HumanB personB;
// 	personB.setName("person B");
// 	personB.attack();
// 	Weapon *bWeapon = new Weapon();
// 	personB.setWeapon(*bWeapon);
// 	personB.attack();
// 	delete bWeapon;

// 	std::cout << std::endl << "------- Person A -------" << std::endl;



// 	return (0);
// }


int main()
{
	// {
	// 	Weapon club = Weapon("crude spiked club");
	// 	HumanA bob("Bob", club);
	// 	bob.attack();
	// 	club.setType("some other type of club");
	// 	bob.attack();
	// }
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
return 0;
}