
#include "Account.hpp"
#include <iostream>
#include <chrono>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}
int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits += 1;
	this->_totalNbDeposits += 1;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";nb_deposits:" << Account::_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";p_amount:" << Account::_amount;
	if (withdrawal < Account::_amount)
	{
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals += 1;
		this->_totalNbWithdrawals += 1;
		std::cout << ";amount:" << Account::_amount;
		std::cout << ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
	}
	else
	{
		std::cout << ";withdrawal:refused" << std::endl;
	}
	return true;
}

int Account::checkAmount(void) const
{
	return 0;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";deposits:" << Account::_nbDeposits;
	std::cout << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	// yyyymmdd_hhmmss

	// current date/time based on current system
	time_t now = time(0);

	tm *ltm = localtime(&now);

	// print various components of tm structure.
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	std::cout << 1 + ltm->tm_mon;
	std::cout << ltm->tm_mday;
	std::cout << "_" << 5 + ltm->tm_hour;
	std::cout << 30 + ltm->tm_min;
	std::cout << ltm->tm_sec;
	std::cout << "] ";

	// std::cout << "[19920104_091532] ";
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbAccounts += 1;
	this->_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";created" << std::endl;

	return;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";closed" << std::endl;
	return;
}
