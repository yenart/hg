#include <string>

class Employee {
public:
	Employee(std::string, std::string, int);
	void setFirstName(std::string);
	void setLastName(std::string);
	void setMonthSalary(int);
	std::string getFirstName();
	std::string getLastName();
	int  getMonthSalary();
    int getYearSalary();
    int updateSalary();
private:
	std::string firstName;
	std::string lastName;
	int monthSalary;
};

