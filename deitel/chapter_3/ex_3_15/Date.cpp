#include <iostream>
#include <string>
#include "Date.h"

Date::Date(int _day, int _month, int _year){
    setDay( _day );
    setMonth( _month );
    setYear( _year );
}

void Date::setMonth(int _month){
    
    if(_month >= 1 && _month <= 12){
        month = _month;
   }else{
        month = 1;
   }
}

void Date::setDay(int _day){
    day = _day;
}

void Date::setYear(int _year){
    year = _year;
}

int Date::getMonth(){
    return month;
}

int Date::getDay(){
    return day;
}

int Date::getYear(){
    return year;
}

void Date::displayDate(){
    std::cout << "Date is: " << getDay() << "/" << getMonth() << "/" << getYear()<< std::endl;
}
