#include <iostream>

int main()
{
	int number_1, number_2;
	
	
	std::cout << "Enter first integer: " << std::endl;
	std::cin >> number_1;
	std::cout << "Enter second integer: " << std::endl;
	std::cin >> number_2;
	std::cout << "Sum of integers: " << number_1 + number_2 << std::endl;
	std::cout << "Multiplication of integers:" << number_1 *number_2 << std::endl;
	std::cout << "Subtraction of integers:" << number_1 - number_2 << std::endl;
	std::cout << "Division of integers:" << number_1 / number_2 << std::endl;

	return 0;
}
