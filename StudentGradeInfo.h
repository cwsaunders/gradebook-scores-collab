#pragma once

//Derived/child class

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "StudentInfo.h"

class StudentGradeInfo :public StudentInfo
{
	std::vector<double> testGrades;


public:
	StudentGradeInfo() = default;
	StudentGradeInfo(double);
	void setTestGrades(double);
	std::vector<double> getTestGrades();
	
	
	

	friend std::ostream& operator<<(std::ostream&, const StudentGradeInfo&);


};
