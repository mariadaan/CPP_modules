#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

int getJumpIndex(std::string level)
{
	if (level.empty())
		return -1;
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return i;
	}
	return -1;
}

void Harl::complain(std::string level)
{
	int jump_index = getJumpIndex(level);
	if (jump_index == -1)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	switch (jump_index)
	{
	case 0:
	{
		std::cout << "[ DEBUG ]" << std::endl;
		debug();
	}
	case 1:
	{
		std::cout << "[ INFO ]" << std::endl;
		info();
	}
	case 2:
	{
		std::cout << "[ WARNING ]" << std::endl;
		warning();
	}
	case 3:
	{
		std::cout << "[ ERROR ]" << std::endl;
		error();
	}
	default:
		break;
	}
}

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}
