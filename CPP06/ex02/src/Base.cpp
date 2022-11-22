#include "Base.hpp"

Base::~Base(void){}

Base *generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
	{	A *baseA = new A();
		return baseA;
		break;
	}
	case 1:
	{	B *baseB = new B();
		return baseB;
		break;
	}
	case 2:
	{	C *baseC = new C();
		return baseC;
		break;
	}
	default:
	{	return NULL;
		break;
	}
	}
}

void identify(Base *p)
{
	A *baseA = dynamic_cast<A*>(p);
	if (baseA)
	{
		std::cout << "A" << std::endl;
		return;
	}
	B *baseB = dynamic_cast<B*>(p);
	if (baseB)
	{
		std::cout << "B" << std::endl;
		return;
	}
	C *baseC = dynamic_cast<C*>(p);
	if (baseC)
	{
		std::cout << "C" << std::endl;
		return;
	}
}

void identify(Base &p)
{
	try
	{
		A &baseA = dynamic_cast<A&>(p);
		(void)baseA;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		B &baseB = dynamic_cast<B&>(p);
		(void)baseB;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		C &baseC = dynamic_cast<C&>(p);
		(void)baseC;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}
