#include <iostream>
#include <string>
#include "GradeBook.h"

int main() {

    std::string courseName;
    std::string instructorName;

    std::cout << "Please enter course name: " << std::endl;
    getline(std::cin, courseName);
    std::cout << "Please enter instructor  name: " << std::endl;
    getline(std::cin, instructorName);
    GradeBook gradeBook(courseName, instructorName);
    gradeBook.displayMessage();
}
