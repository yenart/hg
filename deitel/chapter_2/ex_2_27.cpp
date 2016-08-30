#include <iostream>

int main()
{
    char character;
    std::cout << "Please enter a character:" << std::endl;    
    std::cin >> character;
    std::cout << "The integer equivalent of a character is: ";
    std::cout << static_cast< int >( character ) << std::endl;
    
    return 0;
}
