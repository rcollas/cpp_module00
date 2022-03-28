#include "Account.hpp"
#include <ctime>
#include <iostream>

Account::Account(int initial_deposit) {
    _totalAmount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalNbDeposits++;
}

Account::~Account( void ) {}

int Account::getNbAccounts( void ) {

    return _nbAccounts;
}

int Account::getTotalAmount( void ) {

    return _totalAmount;
}

int Account::getNbDeposits( void ) {

    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {

    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {

    std::cout << "accounts:" << _nbAccounts
                    << ";total:" << _totalAmount
                    << ";deposits:" << _totalNbDeposits
                    << ";withdrawals:" << _totalNbWithdrawals
                    << std::endl;
}

void Account::makeDeposit(int deposit) {

    _totalNbDeposits++;
    _totalAmount += deposit;
    _nbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal ) {

   if (_amount >= withdrawal) {
       _amount -= withdrawal;
       _totalAmount -= withdrawal;
       return true;
   }
   return false;
}

void Account::_displayTimestamp( void ) {

    time_t time = std::time(0);
    tm *date = localtime(&time);
    std::cout << "[" << date->tm_year
                        << date->tm_mon
                        << date->tm_mday
                        << "_"
                        << date->tm_hour
                        << date->tm_min
                        << date->tm_sec << "]" << std::endl;
}
