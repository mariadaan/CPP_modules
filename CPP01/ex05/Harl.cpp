#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int getJumpIndex(std::string level)
{
	if (level.empty())
		return -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
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
	void (Harl::*func_pointers[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error};
	if (jump_index != -1)
	{
		void (Harl::*complaint)(void) = func_pointers[jump_index];
		(this->*complaint)();
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
