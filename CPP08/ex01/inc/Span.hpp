#ifndef SPAN_HPP
 #define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <ctime>

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
	int shortestSpan(void);
	int longestSpan(void);
	void addMany(int N);
	
private:
	const unsigned int _maxSize;
	std::vector<int> _values;
};

std::vector<int> getRandomVector(int N);

#endif
