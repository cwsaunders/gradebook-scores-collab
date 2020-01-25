//Derived/child class

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "StudentGradeInfo.h"
#include "StudentInfo.h"

using namespace std;

StudentGradeInfo::StudentGradeInfo(double gradeInput)
{
	setTestGrades(gradeInput);
}

void StudentGradeInfo::setTestGrades(double grade)
{
	testGrades.push_back(grade);
}
std::vector<double> StudentGradeInfo::getTestGrades()
{
	return testGrades;
}



std::ostream& operator<<(std::ostream& output, const StudentGradeInfo& studentGradeInfoVal) //Overloads operator << to output average test score
{
	double one = 0;
	double two = 0;
	double three = 0;
	double four = 0;
	double five = 0;
	for (int i = 0; i < studentGradeInfoVal.testGrades.size(); i++)
	{
		if (i = 0)
		{
			one = studentGradeInfoVal.testGrades[i];
		}
		if (i = 1)
		{
			two = studentGradeInfoVal.testGrades[i];
		}
		if (i = 2)
		{
			three = studentGradeInfoVal.testGrades[i];
		}
		if (i = 3)
		{
			four = studentGradeInfoVal.testGrades[i];
		}
		if (i = 4)
		{
			five = studentGradeInfoVal.testGrades[i];
		}
	}
	
	double total = (one + two + three + four + five) / studentGradeInfoVal.testGrades.size(); //Average
	

	output << "Test average: " << total << endl;
	return output; //Returns average
}