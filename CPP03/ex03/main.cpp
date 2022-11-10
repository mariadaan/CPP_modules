#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "DiamondTrap named Bella:\n";
	DiamondTrap bella("Bella");
	bella.whoAmI();

	std::cout << "\nUnnamed DiamondTrap:\n";
	DiamondTrap unnamed;
	unnamed.whoAmI();
	return 0;
}
