#include "easyfind.hpp"
#include <algorithm>
#include <array>
#include <vector>
#include <iostream>

// int main(void)
// {
// 	std::vector<int> testvector;

// 	for (int i = 0; i < 5; i++)
// 		testvector.push_back(i);
// 	testvector.push_back(42);
// 	for (int j = 0; j < 5; j++)
// 		testvector.push_back(j);

// 	std::cout << "Output of begin and end: ";
// 	for (int k = testvector.begin(); k != testvector.end(); ++i)
// 		std::cout << *k << " ";
// 	return 0;
// }

int main(void)
{
	std::array<int, 15> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	for (int i = 0; i < static_cast<int>(arr.size()); i++) {
		std::cout << "index " << i << " at " << arr[i]<< "\n";
	}
	std::cout << ::easyfind(arr, 13) << std::endl;
}
