#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() {}

Account::Account(int initial_deposit) {
    _totalAmount += initial_deposit;
	_amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

Account::~Account() {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

int Account::getNbAccounts() {

    return _nbAccounts;
}

int Account::getTotalAmount() {

    return _totalAmount;
}

int Account::getNbDeposits() {

    return _totalNbDeposits;
}

int Account::getNbWithdrawals() {

    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos() {

	_displayTimestamp();
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
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	_amount += deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;

	if (_amount >= withdrawal) {
       _totalAmount -= withdrawal;
	   _totalNbWithdrawals++;
	   _nbWithdrawals++;

	   std::cout << ";withdrawal:" << withdrawal;
	   _amount -= withdrawal;
	   std::cout << ";amount:" << _amount;
	   std::cout << ";nb_withdrawals:" << _nbWithdrawals;
	   std::cout << std::endl;
       return true;
   }
	else {
		std::cout << ";withdrawal:refused" << std::endl;
	}
   return false;
}

int Account::checkAmount() const {

	return _amount;
}

void Account::displayStatus() const {

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void Account::_displayTimestamp() {

    time_t time = std::time(0);
    tm *date = std::localtime(&time);

	char formatDate[19];
	std::strftime(formatDate, 19, "[%Y%m%d_%H%M%S]", date);

	std::cout << formatDate;
}
