#include <string>
#include "Employee.h"

Employee::Employee(std::string _firstName, std::string _lastName, int _monthSalary){
    setFirstName(_firstName);
    setLastName(_lastName);
    setMonthSalary(_monthSalary);
}

void Employee::setFirstName(std::string _firstName){
    firstName = _firstName;
}

void Employee::setLastName(std::string _lastName){
    lastName = _lastName;
}

void Employee::setMonthSalary(int _monthSalary){
    if( _monthSalary < 0 ) {
        monthSalary = 0;
    }else{
        monthSalary = _monthSalary;
    }
};

std::string Employee::getFirstName(){
    return firstName;
}

std::string Employee::getLastName(){
    return lastName;
}

int Employee::getMonthSalary(){
    return monthSalary;
}

int Employee::getYearSalary(){
    return monthSalary * 12;
} 

int Employee::updateSalary(){
   monthSalary = getYearSalary() * 0.1;
}
