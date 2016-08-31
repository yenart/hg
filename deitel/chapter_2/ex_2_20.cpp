#include <iostream>
 
int main()
{
    int radius;
 
    std::cout << "Enter the circle radius: ";
    std::cin >> radius;
    std::cout << "Diameter is " << radius * 2 << std::endl;
    std::cout << "Circumference is " << 2 * 3.14159 * radius << std::endl;
    std::cout << "Area is " << 3.14159 * radius * radius << std::endl;
 
    return 0;
}
