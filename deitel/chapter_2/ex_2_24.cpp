#include <iostream>
 
int main()
{
    int number;
 
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> number;
    if ( number % 2 == 0 ) {
        std::cout << "The integer is even." << std::endl;
    }
    else {
        std::cout << "The integer is odd." << std::endl;
    
    }
    return 0;
}
