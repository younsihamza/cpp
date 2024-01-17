/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:34:04 by hyounsi           #+#    #+#             */
/*   Updated: 2024/01/08 12:10:41 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits ;
int Account::_totalNbWithdrawals ;

 int Account::getNbAccounts() 
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

void Account::displayAccountsInfos()
{
     _displayTimestamp();
    std::cout<< "accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

Account::Account(int initial_deposit)
{
    _amount=initial_deposit;
    _accountIndex=_nbAccounts;
     _displayTimestamp();
     std::cout<<"index:"<< _accountIndex << ";amount:"<< _amount << ";created"<<std::endl;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
}

Account::Account()
{
    _amount = 0;
    _accountIndex = _nbAccounts;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
     _displayTimestamp();
    std::cout<<"index:"<< _accountIndex << ";amount:"<< _amount << ";created"<<std::endl;
    _nbAccounts++;
}

Account::~Account()
{
     _displayTimestamp();
    std::cout<<"index:"<< _accountIndex << ";amount:"<< _amount << ";closed"<<std::endl;
    _nbAccounts -= 1;
    _totalAmount -= checkAmount();
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout<<"index:"<< _accountIndex << ";p_amount:"<< _amount <<";deposit:"<< deposit << ";amount:"<< deposit + _amount<<";nb_deposits:"<<_nbDeposits +1 <<std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}

int Account::checkAmount()const
{
    return _amount;
}
bool Account::makeWithdrawal(int withdrawal)
{
     _displayTimestamp();
    if(_amount >= withdrawal)
    {
        std::cout << "index:"<< _accountIndex << ";p_amount:" <<  _amount << ";withdrawal:"<<withdrawal <<";amount:"<<_amount - withdrawal << ";nb_withdrawals:"<<_nbWithdrawals +1<<std::endl;
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        
        return true;
    }
    std::cout << "index:"<< _accountIndex << ";p_amount:" <<  _amount << ";withdrawal:"<<"refused"<<std::endl;
    return false;
}
void	Account::displayStatus( void ) const
{
     _displayTimestamp();
    std::cout<<"index:"<< _accountIndex << ";amount:"<< _amount << ";deposits:" <<_nbDeposits << ";withdrawals:"<<_nbWithdrawals <<std::endl;
}

void fixe(int number)
{
    if(number <= 9)
        std::cout << "0" + std::to_string(number);
    else
         std::cout << std::to_string(number);
}
void Account::_displayTimestamp ()
{
    std::time_t now = std::time(0);
    std::tm *ltm = localtime(&now);
    std::cout << "["<< 1900+ltm->tm_year;
    fixe(ltm->tm_mon+1);
    fixe(ltm->tm_mday);
    std::cout << "_";
    fixe(ltm->tm_hour);
    fixe(ltm->tm_min);
    fixe(ltm->tm_sec);
    std::cout << "] ";
}