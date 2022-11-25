#ifndef SPAN_HPP
 #define SPAN_HPP

#include <iostream>
#include <stack>
#include <functional>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef T* iterator;
	MutantStack(void){}
	~MutantStack(void){}
	MutantStack(const MutantStack &other) {
		*this = other;
	}
	MutantStack &operator=(const MutantStack &other) {
		*this = other;
		return *this;
	}
	
	iterator	begin()
	{
		iterator it = &this->top();
		for (size_t i = 0; i < this->size() - 1; i++)
		{
			it--;
		}
	return it;
	}

};

#endif
