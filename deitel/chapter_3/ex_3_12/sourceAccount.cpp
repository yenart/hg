#include <iostream>
#include "Account.h"

int main() {

    int amount;
    Account account1(600);
    Account account2(70);

    std::cout << "The initial balance for first account is: " << account1.getBalance() << std::endl;
    std::cout << "The initial balance for second account is: " << account2.getBalance() << std::endl;
    std::cout << "Please enter the amount: " << std::endl;
    std::cin >> amount;
    account1.credit(amount);
    std::cout << "The balance for first account after credit is: " << account1.getBalance() << std::endl;
    account2.debit(amount);
    std::cout << "The balance for second account after debit is: " << account2.getBalance() << std::endl;
}


