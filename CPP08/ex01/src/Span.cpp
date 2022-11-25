#ifndef SPAN_TPP
#define SPAN_TPP
#include "Span.hpp"

template <typename T>
void printContainer(T container);


Span::Span(void) : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &other) : _maxSize(other.getMaxSize())
{
	*this = other;
}

Span	&Span::operator=(const Span &other)
{
	this->_values = other.getValues();
	return (*this);
}

Span::~Span() {}

unsigned int Span::getMaxSize(void) const
{
	return this->_maxSize;
}

std::vector<int> Span::getValues(void) const
{
	return this->_values;
}

void Span::addNumber(int toAdd)
{
	if (this->_values.size() >= this->_maxSize)
		throw std::out_of_range("max size reached");
	this->_values.push_back(toAdd);
}

int Span::shortestSpan(void)
{
	int span = INT_MAX;
	if (this->_maxSize <= 1 || this->_values.size() <= 1)
		throw std::out_of_range("no span can be found");

	std::vector<int> sorted = this->_values;
	std::sort(sorted.begin(), sorted.end());
	for (std::vector<int>::const_iterator it = ++sorted.cbegin();
	it != sorted.cend(); it++)
	{
		std::vector<int>::const_iterator next = std::next(it, 1);
		if (next == sorted.cend())
			break;
		span = (*next - *it) < span ? (*next - *it) : span;
	}
	return span;
}

int Span::longestSpan(void)
{
	if (this->_maxSize <= 1 || this->_values.size() <= 1)
		throw std::out_of_range("no span can be found");
	int max = *max_element(this->_values.begin(), this->_values.end());
	int min = *min_element(this->_values.begin(), this->_values.end());
	return max - min;
}


#endif
