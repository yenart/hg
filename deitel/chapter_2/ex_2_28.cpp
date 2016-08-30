#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number (five digits): ";
    std::cin >> number;
    std::cout << std::endl;
    std::cout << "The result is: ";
    std::cout << number / 10000 << "   ";
    number = number % 10000;
    std::cout << number / 1000 << "   ";
    number = number % 1000;
    std::cout << number / 100 << "   ";
    number = number % 100;
    std::cout << number / 10 << "   ";
    number = number % 10;
    std::cout << number << std::endl;
    
    return 0;
}
