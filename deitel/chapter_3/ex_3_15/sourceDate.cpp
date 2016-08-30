#include <iostream>
#include <string>
#include "Date.h"

int main() {
    
    int _month;
    int _day;
    int _year;
    std::cout << "Please provide day value: " << std::endl;
    std::cin >> _day;
    std::cout << "Please provide month value: " << std::endl;
    std::cin >> _month;
    std::cout << "Please provide year value: " << std::endl;
    std::cin >> _year;
    Date date( _day, _month, _year );
    date.displayDate();

} 
