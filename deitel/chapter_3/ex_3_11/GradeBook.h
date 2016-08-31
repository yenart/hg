#include <string>

class GradeBook {
public:
    GradeBook(std::string);
    GradeBook(std::string, std::string);
    void setCourseName(std::string);
    void setInstructorName(std::string);
    std::string getCourseName();
    std::string getInstructorName();

    void displayCourse();
    void displayMessage();
private:
	std::string courseName;
	std::string instructorName;
};
