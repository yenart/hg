#include <iostream>

int main()
{
    std::cout << "Number 1 to 4  on the same line using one statement and one stream:" << std::endl;
    std::cout << "1 2 3 4" << std::endl;
    std::cout << "Using one statement with four stream insertion operators:" << std::endl;
    std::cout << "1 " << "2 " << "3 " << "4" << std::endl;
    std::cout << "Using four statements: " << std::endl;
    std::cout << "1 ";
    std::cout << "2 ";
    std::cout << "3 ";
    std::cout << "4" << std::endl;
    return 0;
}
