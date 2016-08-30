/*3.14 (Employee Class) Create a class called Empl oyee that includes three pieces of information as 
data members.a first name (type string), a last name (type string) and a monthly salary (type 
int). [Note: In subsequent chapters, we'll use numbers that contain decimal points (e.g., 2.75). 
called floating-point values.to represent dollar amounts.] Your class should have a constructor that 
initializes the three data members. Provide a set and a get function for each data member. If the 
monthly salary is not positive, set it to 0. Write a test program that demonstrates class Employee's 
capabilities. Create two Employee objects and display each object's yearly salary. Then give each  
Employee a 10 percent raise and display each Employee's yearly salary again. 
*/

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
