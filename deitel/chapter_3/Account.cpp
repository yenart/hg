#include <iostream>
#include "Account.h"

Account::Account( int balance )
{
    setBalance( balance );
};

void Account::setBalance( int balance )
{
    if ( balance >= 0 ) {
        accountBalance = balance;
    }
    else {
	accountBalance = 0;
	std::cout << "Initial balance is invalid!" << std::endl;
    }
};

int Account::getBalance() 
{
    return accountBalance;
};

void Account::credit( int amount ) 
{
    accountBalance = accountBalance + amount;
};

void Account::debit( int amount ) 
{
    if ( amount < accountBalance ) {
        accountBalance = accountBalance - amount;
    }
    else {
       accountBalance = 0;
       std::cout << "Debit amount exceeded account balance." << std::endl;
    }
}

