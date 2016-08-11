#include <iostream>
 
int main()
{
    int number_1, number_2;
 
    std::cout << "Enter two integers:" << std::endl;
    std::cin >> number_1 >> number_2;
 
    if ( number_1 % number_2 == 0 )
        std::cout << number_1 << " is a multiple of " << number_2 << std::endl;
 
    if ( number_1 % number_2 != 0 )
        std::cout << number_1 << " is not a multiple of " << number_2 << std::endl;
 
    return 0;
}
