/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:31:31 by ssghuri           #+#    #+#             */
/*   Updated: 2021/07/03 19:31:38 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    this->_nbDeposits = Account::_totalNbDeposits;
    this->_nbWithdrawals = Account::_totalNbWithdrawals;
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";" << "amount:" << initial_deposit << ";" << "created\n";
    Account::_totalAmount += this->_amount;
    _nbAccounts++;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";closed\n";
}

int Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::makeDeposit( int deposit)
{
    _displayTimestamp();
    if (deposit != 0)
    {
        _nbDeposits++;
        Account::_totalNbDeposits++;
    } 
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << _nbDeposits <<  "\n";
    this->_amount = this->_amount + deposit;
    _totalAmount = _totalAmount + deposit;
}

bool Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
    if (this->_amount - withdrawal < 0)
    {
        std::cout << ";withdrawal:refused\n"; 
        return false;
    }
    this->_amount = this->_amount - withdrawal;
    this->_nbWithdrawals++;
    _totalAmount = _totalAmount - withdrawal;
    _totalNbWithdrawals++;
    std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << "\n";
    return true;    
}

void Account::_displayTimestamp( void )
{
    std::time_t result = std::time(nullptr);
    int  years = result / 31556952;
    int  month = (result - years * 31556952) / 2592000;
    int day  = (result - ((years * 31556952) + (month * 2592000)))/ 86400;
    int rest = (result - ((years * 31556952) + (month * 2592000) + (day * 86400)));
    std::cout <<"[" << years + 1970;
    if(month < 10)
        std::cout <<"0" << month + 1 ;
    else
        std::cout << month + 1 ;
    if (day < 10)
        std::cout << "0" << day - 1 << "_0" << rest << "] ";
    else
        std::cout << day - 1 << "_0" << rest << "] ";
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << "\n";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;