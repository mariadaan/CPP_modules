#include "Base.hpp"

int main(void)
{
	Base *basePtr;
	basePtr = generate();
	identify(basePtr);
	identify(*basePtr);
}
