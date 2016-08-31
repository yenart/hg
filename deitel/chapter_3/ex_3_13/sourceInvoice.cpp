#include <iostream>
#include <string>
#include "Invoice.h"

int main() {
    
    std::string number;
    std::string description;
    int quantity;
    int price;

    std::cout << "Please enter part number: " << std::endl;
    std::cin >> number;
	
    std::cout << "Please enter quantity: " << std::endl;
    std::cin >> quantity;

    std::cout << "Please enter part price: " << std::endl;
    std::cin >> price;
    
    std::cin.ignore(); 
   
    std::cout << "Please enter description: " << std::endl;
    getline(std::cin, description);
   
    Invoice invoice(number, description, quantity, price);
    invoice.displayMessage();
}
