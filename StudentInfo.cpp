//Base/parent class

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "StudentInfo.h"

using namespace std;

StudentInfo::StudentInfo(std::string name, int ID, std::string concentration) //Constructor sets student info
{
	setStudentName(name);
	setStudentID(ID);
	setMajor(concentration);
}

void StudentInfo::setStudentName(std::string name)
{
	studentName = name;
}

std::string StudentInfo::getStudentName()
{
	return studentName;
}

void StudentInfo::setStudentID(int ID)
{
	studentID = ID;
}

int StudentInfo::getStudentID()
{
	return studentID;
}

void StudentInfo::setMajor(std::string concentration)
{
	major = concentration;
}

std::string StudentInfo::getMajor()
{
	return major;
}

bool StudentInfo::operator==(const StudentInfo& boolVal) const //Overloads == operator to check for identical student ID numbers
{
	bool testVal=false;
	if (studentID == boolVal.studentID)
	{
		testVal = true;
	}

	return testVal;
}

std::ostream& operator<<(std::ostream& output, const StudentInfo& studentInfoVal) //Overloads << operator to return student info
{
	output << "Student name: " << studentInfoVal.studentName << endl << "Student ID: " << studentInfoVal.studentID << endl
		<< "Student major: " << studentInfoVal.major << endl;
	return output;


}