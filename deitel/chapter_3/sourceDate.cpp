/*3.15 (Date Class) Create a class called Date that includes three pieces of information as data 
members.a month (rypeint),aday (typeint) and a year (type int). Your class should have a  
constructor with three parameters that uses the parameters to initialize the three data members. For thepurpose of this exercise, assume that the values provided for the year and day are correct, but ensure 
that the month value is in the range 1.12; if it isn't, set the month to 1. Provide a set and a.get  
function for each data member. Provide a member function di spl ayDate that displays the month, day 
and year separated by forward slashes (/). Write a test program that demonstrates class Date's  
capabilities. 
*/

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
