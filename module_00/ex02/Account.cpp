/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:41:53 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/13 14:33:35 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);

	tm *t = localtime(&now);
	std::cout << "[" << t->tm_year + 1900;
	if (t->tm_mon + 1 < 10)
		std::cout << '0';
	std::cout << t->tm_mon + 1;
	if (t->tm_mday < 10)
		std::cout << '0';
	std::cout << t->tm_mday << '_';
	if (t->tm_hour < 10)
		std::cout << '0';
	std::cout << t->tm_hour;
	if (t->tm_min < 10)
		std::cout << '0';
	std::cout << t->tm_min;
	if (t->tm_sec < 10)
		std::cout << '0';
	std::cout << t->tm_sec << "] ";
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	std::cout << "index:" << _accountIndex 
		<< ";amount:" << initial_deposit << ";created" << std::endl;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account(void)
{
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _accountIndex 
		<< ";amount:" << _amount << ";closed" << std::endl;
}

Account::Account( void )
{
	
}

// void	Account::_displayTimestamp( void )
// {
// 	std::cout << "[19920104_091532] ";
// }

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() 
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() 
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<< ";p_amount:" << _amount 
		<< ";deposit:" << deposit;
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << ";amount:" << _amount 
		<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex 
		<< ";amount:" << _amount 
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
