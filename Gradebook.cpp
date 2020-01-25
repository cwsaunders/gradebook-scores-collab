//Derived/child class

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "StudentGradeInfo.h"
#include "StudentInfo.h"
#include "Gradebook.h"

using namespace std;

StudentInfo Gradebook::getStudentInfo1() //Used for cout << s1
{
	return s1;
}

StudentInfo Gradebook::getStudentInfo2() //cout << s2
{
	return s2;
}

StudentInfo Gradebook::getStudentInfo3() //cout << s3
{
	return s3;
}

StudentGradeInfo Gradebook::getStudentGradeInfo1() //cout << sg1
{
	
	return sg1;
}

StudentGradeInfo Gradebook::getStudentGradeInfo2() //cout << sg2
{
	return sg2;
}

StudentGradeInfo Gradebook::getStudentGradeInfo3() //cout << sg3
{
	return sg3;
}

void Gradebook::addStudent()
{
	std::string nameIn;
	int ID;
	std::string major;
		cout << "Enter student name, ID, and then their major: " << endl; //Prompt
		std::cin >> nameIn;
		cin >> ID;
		while (cin.fail())
		{
			cout << "Input must not match another student ID" << endl; //Error message
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> ID;
		}
			cin >> major;

			if (tracker == 1)
			{
				int x=0;
				double y = 0;
				cout << "How many grades would you like to add:" << endl; //Prompt
				cin >> x;
				while (cin.fail())
				{
					cout << "Input must be an integer" << endl; //Error message
					cin.clear();
					cin.ignore(10000, '\n');
					cin >> x;
				}
				for (int i = 0; i < x; i++)
				{
					cout << "Enter grade: " << endl;
					cin >> y;
					while (cin.fail())
					{
						cout << "Input must be a floating point number" << endl; //Error message
						cin.clear();
						cin.ignore(10000, '\n');
						cin >> x;
					}
					sg1.setTestGrades(y);
					cin.clear();
					cin.ignore(10000, '\n');
				}
				s1.setStudentName(nameIn);
				s1.setStudentID(ID);
				s1.setMajor(major);
				tracker2 = 1;
			}
			if (tracker == 2)
			{
				int x = 0;
				double y = 0;
				cout << "How many grades would you like to add:" << endl; //Prompt
				cin >> x;
				while (cin.fail())
				{
					cout << "Input must be an integer" << endl; //Error message
					cin.clear();
					cin.ignore(10000, '\n');
					cin >> x;
				}
				for (int i = 0; i < x; i++)
				{
					cout << "Enter grade: " << endl; //Prompt
					cin >> y;
					while (cin.fail())
					{
						cout << "Input must be a floating point number" << endl; //Error message
						cin.clear();
						cin.ignore(10000, '\n');
						cin >> y;
					}
					sg2.setTestGrades(y);
					cin.clear();
					cin.ignore(10000, '\n');
				}
				s2.setStudentName(nameIn);
				s2.setStudentID(ID);
				s2.setMajor(major);
				tracker2 = 2;
			}
			if (tracker == 3)
			{
				int x = 0;
				double y = 0;
				cout << "How many grades would you like to add: " << endl; //Prompt
				cin >> x;
				while (cin.fail())
				{
					cout << "Input must be an integer" << endl; //Error message
					cin.clear();
					cin.ignore(10000, '\n');
					cin >> x;
				}
				for (int i = 0; i < x; i++)
				{
					cout << "Enter grade: " << endl; //Prompt
					cin >> y;
					while (cin.fail())
					{
						cout << "Input must be a floating point number" << endl; //Error message
						cin.clear();
						cin.ignore(10000, '\n');
						cin >> y;
					}
					sg3.setTestGrades(y);
					cin.clear();
					cin.ignore(10000, '\n');
				}
				s3.setStudentName(nameIn);
				s3.setStudentID(ID);
				s3.setMajor(major);
				tracker2 = 3;
			}
			++tracker;
		
}

int Gradebook::getTracker2()
{
	return tracker2;
}