//
// Created by Dmitry ZABROTSKY on 12/21/18.
//

#include "Account.class.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;

	_amount = initial_deposit;
	_totalAmount += _amount;

	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbCheckAmount = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created\n";
}

Account::~Account()
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed\n";
}

void Account::_displayTimestamp()
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [19];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer, 19, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
}

int	Account::getNbAccounts(void) { return _nbAccounts; };
int	Account::getTotalAmount(void) { return _totalAmount; };
int	Account::getNbDeposits(void) { return _totalNbDeposits; };
int	Account::getNbWithdrawals(void) { return _totalNbWithdrawals; };

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
};

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
};

int Account::checkAmount() const
{
	_nbCheckAmount++;
	return _amount;
};

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";";
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << "deposit:" << deposit << ";" << "amount:" << _amount << ";" << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
};

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";";
	if (withdrawal > _amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";" << "amount:" << _amount << ";";
		std:: cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}