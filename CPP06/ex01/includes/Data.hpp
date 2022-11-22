#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

struct Data {
	uint value;
};

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

#endif
