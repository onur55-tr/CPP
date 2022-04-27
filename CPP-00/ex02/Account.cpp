#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

using   std::cout;
using   std::setw;
using   std::setfill;
using   std::endl;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = Account::_nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	++Account::_nbAccounts;
	Account::_totalAmount += _amount;
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
}

int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

int Account::checkAmount( void ) const
{
	return (_amount);
}

void    Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	cout << " accounts: " << Account::_nbAccounts << ";total:"
	<< Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals << endl;
}

void    Account::displayStatus( void ) const
{
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
	<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << endl;
}

void    Account::makeDeposit( int deposit )
{
	int p_amount;

	p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++Account::_totalNbDeposits;
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:"
	<< deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	cout << " index:" << _accountIndex << ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		cout << ";withdrawal:refused" << endl;
		return (false);
	}
	cout << ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	++Account::_totalNbWithdrawals;
	++_nbWithdrawals;
	cout << ";amount:" << _amount <<  ";nb_withdrawals:" << _nbWithdrawals << endl;
	return (true);
}

void    Account::_displayTimestamp( void )
{
	time_t  now = time(NULL);
	tm *t_now = localtime(&now);

	cout << setfill('0') << "[" << t_now->tm_year + 1900 << setw(2) <<
	t_now->tm_mon + 1 << setw(2) << t_now->tm_mday << "_" << setw(2)
	<< t_now->tm_hour << setw(2) << t_now->tm_min << setw(2) << t_now->tm_sec << "]";
}

Account::~Account( void )
{
	_displayTimestamp();
	cout << " index:" << _amount << ";closed" << endl;
}
