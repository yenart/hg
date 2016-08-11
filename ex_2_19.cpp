#include <iostream>
 
int main()
{
    int number_1, number_2, number_3;
    std::cout << "Input three different integers : ";
    std::cin >> number_1 >> number_2 >> number_3;
    std::cout << "Sum is " << number_1 + number_2 + number_3 << std::endl;
    std::cout << "Average is " << (number_1 + number_2 + number_3) / 3 << std::endl;
    std::cout << "Product is " << number_1 * number_2 * number_3 << std::endl;
 
    if (number_1 < number_2) {
        if (number_3 < number_1) {
           std::cout << "Smallest is " << number_3 << std::endl;
        }
        else {
            std::cout << "Smallest is " << number_1 << std::endl;
        }
    }
    else {
        std::cout << "Smallest is " << number_2 << std::endl;
    }
 
    if (number_1 > number_2) {
        if (number_3 > number_2) {
            std::cout << "Largest is " << number_3 << std::endl;
        }
        else {
            std::cout << "Largest is " << number_1 << std::endl;
        }
    }
    else {
        std::cout << "Largest is " << number_2 << std::endl;
    }
    return 0;
}
