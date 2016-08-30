#include <iostream>
#include <string>
#include "Employee.h"

int main() {
    
    std::string _firstName1;
    std::string _lastName1;
    int _monthSalary1;

    std::string _firstName2;
    std::string _lastName2;
    int _monthSalary2;


    std::cout << "Please enter first employee first name: " << std::endl;
    std::cin >> _firstName1;
	
    std::cout << "Please enter first employee last name: " << std::endl;
    std::cin >> _lastName1;

    std::cout << "Please enter first employee monthly salary: " << std::endl;
    std::cin >> _monthSalary1;
 
    std::cout << "Please enter second employee first name: " << std::endl;
    std::cin >> _firstName2;
	
    std::cout << "Please enter second employee last name: " << std::endl;
    std::cin >> _lastName2;

    std::cout << "Please enter second employee monthly salary: " << std::endl;
    std::cin >> _monthSalary2;
   
    Employee employee1(_firstName1, _lastName1, _monthSalary1);
    Employee employee2(_firstName2, _lastName2, _monthSalary2);
 
    std::cout << "First employee's yearly salary is: " <<  employee1.getYearSalary() << std::endl;
    std::cout << "Second employee's yearly salary is: " << employee2.getYearSalary() << std::endl; 

    employee1.updateSalary();
    employee2.updateSalary();
 
    std::cout << "First employee's yearly salary is: " << employee1.getYearSalary() << std::endl;
   
    std::cout << "Second employee's yearly salary is: " << employee2.getYearSalary() << std::endl; 


} 
