#pragma once

//Derived/child class

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "StudentGradeInfo.h"
#include "StudentInfo.h"
#include "Gradebook.h"

class Gradebook :public StudentGradeInfo
{
	StudentInfo s1;
	StudentInfo s2;
	StudentInfo s3;
	StudentGradeInfo sg1;
	StudentGradeInfo sg2;
	StudentGradeInfo sg3;
	int tracker=1;
	int tracker2 = 0;

public:
	int getTracker2();
	StudentInfo getStudentInfo1();
	StudentInfo getStudentInfo2();
	StudentInfo getStudentInfo3();
	StudentGradeInfo getStudentGradeInfo1();
	StudentGradeInfo getStudentGradeInfo2();
	StudentGradeInfo getStudentGradeInfo3();
	Gradebook() = default;
	void addStudent();


};