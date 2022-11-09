/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:03:13 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/05 10:57:56 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

/* Static Variables */
int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* Local variables
int				_accountIndex;
int				_amount;
int				_nbDeposits;
int				_nbWithdrawals;
*/

Account::Account(int initial_deposit):_amount(initial_deposit)
{
	std::cout << "[19920104_091532] index:" << _nbAccounts;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account( void )
{
	std::cout << "[19920104_091532] index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "[19920104_091532] index:" << 
	_accountIndex << ";p_amount:" << _amount << ";deposit:"
	<< deposit << ";amount:" << _amount + deposit << 
	";nb_deposits:" << _nbDeposits
	<< std::endl;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal < _amount)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "[19920104_091532] index:" << 
		_accountIndex << ";p_amount:" << _amount << ";withdrawal:"
		<< withdrawal << ";amount:" << _amount - withdrawal << 
		";nb_withdrawals:" << _nbWithdrawals
		<< std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		return true;
	}
	std::cout << "[19920104_091532] index:" << 
	_accountIndex << ";p_amount:" << _amount << ";withdrawal:refused"
	<< std::endl;
	return false;
}

void	Account::displayStatus( void ) const
{
	std::cout << "[19920104_091532] index:" << 
	_accountIndex << ";amount:" << _amount << ";deposits:"
	<< _nbDeposits << ";withdrawals:" << _nbWithdrawals
	<< std::endl;
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "[19920104_091532] accounts:" << _nbAccounts << ";total:"
	<< _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:"
	<< _totalNbWithdrawals << std::endl;
}


int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
