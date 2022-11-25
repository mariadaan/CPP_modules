#ifndef SPAN_HPP
 #define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>

class Span
{
public:
	Span(void);
	Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span(void);

	unsigned int getMaxSize(void) const;
	std::vector<int> getValues(void) const;

	void addNumber(int toAdd);
	// int shortestSpan(void);
	int longestSpan(void);
	
private:
	const unsigned int _maxSize;
	std::vector<int> _values;
};


#endif
