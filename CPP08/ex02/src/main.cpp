#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);



	// //[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::stack<int> s(mstack);
	std::cout << "\n-------------------------------------------------" << std::endl;
	std::cout << "                  Testing copy                   " << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	MutantStack<int> mstackCopy = mstack;
	std::cout << mstackCopy.top() << std::endl;
	MutantStack<int> mstackCopy2(mstack);
	std::cout << mstackCopy2.top() << std::endl;
	return 0;
}
