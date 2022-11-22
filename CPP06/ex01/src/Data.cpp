#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t retPtr;

	retPtr = reinterpret_cast<uintptr_t>(ptr);
	return retPtr;
}

Data* deserialize(uintptr_t raw)
{
	Data *retPtr;

	retPtr = reinterpret_cast<Data *>(raw);
	return retPtr;
}
