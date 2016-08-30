#include <iostream>
 
int main()
{
    int number_1, number_2;
    std::cout << "Enter first integer:" << std::endl;
    std::cin >> number_1;
    std::cout << "Enter second integer:" << std::endl;
    std::cin >> number_2;
    if (number_1 > number_2) {
        std::cout << number_1 << " is larger than " << number_2 << std::endl;
    }
 
    else if (number_1 == number_2) {
       std::cout << "These numbers are equal." << std::endl;
    }
    else {
        std::cout << number_2 << " is larger than " << number_1 << std::endl;
    }
    return 0;
}
