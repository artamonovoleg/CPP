#include "Account.class.hpp"
#include <iostream>
#include <ostream>

int Account::_totalAmount = 0;
int Account::_nbAccounts = 0; // first account has index 0
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    _amount += initial_deposit;
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
};

Account::~Account( void )
{

};

int Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int Account::getTotalAmount( void )
{
    return _totalAmount;
}


int Account::getNbDeposits( void )
{
    return  _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    if ( _amount >= withdrawal )
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << std::endl;
        return true;
    }
    else 
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:refused" << std::endl;
        return false;
    }
}

int Account::checkAmount( void ) const
{
    return _amount;
}

void Account::displayStatus( void ) const
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
