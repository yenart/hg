#include <string>
#include "Invoice.h"
#include <iostream>


Invoice::Invoice(std::string number, std::string description, int quantity, int price) {
	setPartNumber(number);
	setPartDescription(description);
	setPurchasedQty(quantity);
	setItemPrice(price);
}
void Invoice::setPartNumber(std::string number) {
	partNumber = number;
}
void Invoice::setPartDescription(std::string description) {
	partDescription = description;
}
void Invoice::setPurchasedQty(int quantity) {
	if (quantity < 0) {
		purchasedQty = 0;
	}
	else {
		purchasedQty = quantity;
	}
}
void Invoice::setItemPrice(int price) {
	if (price < 0) {
		itemPrice = 0;
	}
	else {
		itemPrice = price;
	}
}
std::string Invoice::getPartNumber() {
	return partNumber;
}
std::string Invoice::getPartDescription() {
	return partDescription;
}
int Invoice::getPurchaseQty() {
	return purchasedQty;
}
int Invoice::getItemPrice() {
	return itemPrice;
}
int Invoice::getlnvoiceAmount() {
	return purchasedQty * itemPrice;
}

void  Invoice::displayMessage(){
    
    std::cout << "Part number is: " << getPartNumber() << std::endl;
    std::cout << "Part description is: " << getPartDescription() << std::endl;
    std::cout << "Part purchased quantity is: " << getPurchaseQty() << std::endl;
    std::cout << "Item price is: " << getItemPrice() << std::endl;
    std::cout << "lnvoice amount is: " << getlnvoiceAmount() << std::endl;
}
