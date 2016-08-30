/*
(Account Class) Create an Account class that a bank might use to represent customers' bank
accounts. Include a data member of type int to represent the account balance. [Note.- In subsequent
chapters, we'll use numbers that contain decimal points (e.g., 2.75)—called floating-point values—
to represent dollar amounts.] Provide a constructor that receives an initial balance and uses it to
initialize the data member. The constructor should validate the initial balance to ensure that it's greater
than or equal to 0. If not, set the balance to 0 and display an error message indicating that the initial
balance was invalid. Provide three member functions. Member function credit should add an
amount to the current balance. Member function debit should withdraw money from the Account
and ensure that the debit amount does not exceed the Account's balance. If it does, the balance
should be left unchanged and the function should print a message indicating "Debi t amount
exceeded account balance." Member function getBalance should return the current balance. Create a
program that creates uwo Account objects and tests the member functions of class Account.
*/

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


