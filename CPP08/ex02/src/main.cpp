#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		std::cout << "\n-------------------------------------------------" << std::endl;
		std::cout << "                  Mutant stack                   " << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(8);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "\n-------------------------------------------------" << std::endl;
		std::cout << "                  Testing copy                   " << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		MutantStack<int> mstackCopy = mstack;
		std::cout << mstackCopy.top() << std::endl;
		MutantStack<int> mstackCopy2(mstack);
		std::cout << mstackCopy2.top() << std::endl;

		std::cout << "\n-------------------------------------------------" << std::endl;
		std::cout << "              More iterator tests               " << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		MutantStack<int>::iterator current = mstack.end();
		std::cout << *current << std::endl; // points to the element after the top
		current--;
		std::cout << *current << std::endl;
		current--;
		std::cout << *current << std::endl;
		current++; // go back
		std::cout << *current << std::endl;
	}

	{
		std::cout << "\n-------------------------------------------------" << std::endl;
		std::cout << "                      List                       " << std::endl;
		std::cout << "-------------------------------------------------" << std::endl;
		std::list<int> lst;
		lst.push_back(5);
		lst.push_back(17);
		std::cout << lst.back() << std::endl;
		lst.pop_back();
		std::cout << lst.size() << std::endl;
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);



		// //[...]
		lst.push_back(8);
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}
