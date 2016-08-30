#include <iostream>
#include <string>
#include "GradeBook.h"

GradeBook::GradeBook(std::string course)
{
	setCourseName(course);
}


GradeBook::GradeBook(std::string course, std::string instructor)
{
	setCourseName(course);
	setInstructorName(instructor);
}

void GradeBook::setCourseName(std::string course)
{
	courseName = course;
}

void GradeBook::setInstructorName(std::string instructor)
{
	instructorName = instructor;
}

std::string GradeBook::getCourseName()
{
	return courseName;
}

std::string GradeBook::getInstructorName()
{
	return instructorName;
}

void GradeBook::displayCourse()
{
    std::cout << "Welcome to the grade book for\n" << getCourseName() << "!" << std::endl;
}
void GradeBook::displayMessage()
{
    std::cout << "Welcome to the \'" << getCourseName() << "\' course!" << std::endl;
    std::cout << "This course is presented by: " << getInstructorName() << "." << std::endl;
}

