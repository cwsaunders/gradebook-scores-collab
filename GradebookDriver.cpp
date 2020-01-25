//<CSIS 112 Lab 6(2) Christian Saunders> -- This program takes user input about students.
//It uses this input to create a gradebook.
//CSIS 112-<002>
//<Some code is derived from lab 3>

//Include statements
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "StudentInfo.h"
#include "StudentGradeInfo.h"
#include "Gradebook.h"

using namespace std;

int main()
{

	cout << "Christian Saunders -- Lab 6" << endl << endl;

	//Variable declarations
	char quitKey = 'e'; //Used for switch menu
	Gradebook g;
	StudentGradeInfo s;
	int tracker = 0;

	//Program logic
	while (quitKey != 'q'&&quitKey != 'Q')
	{
		cout << "Enter A to add" << endl; //Prompt
		cout << "Enter L to list" << endl; //Prompt
		cout << "Enter Q to quit" << endl; //Prompt
		cin >> quitKey;
		while (cin.fail())
		{
			cout << "Input must be either A, L, or Q" << endl; //Error message
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> quitKey;
		}
		switch (quitKey)
		{
		case 'A': if (tracker == 0 || tracker==1 || tracker==2)
		{
			g.addStudent();
			++tracker;
		}
				  else cout << "Too many students entered!" << endl; //Error message
				  break;
		case 'a':
			if (tracker == 0 || tracker == 1 || tracker == 2)
			{
				g.addStudent();
				++tracker;
			}
			else cout << "Too many students entered!" << endl; //Error message
			break;
		case 'L':
			
			
			if (g.getTracker2() == 1)
			{
				cout << g.getStudentInfo1(); //displays student details
				cout << g.getStudentGradeInfo1(); //displays student test average
			}
			if (g.getTracker2() == 2)
			{
				cout << g.getStudentInfo1();
				cout << g.getStudentGradeInfo1();
				cout << g.getStudentInfo2();
				cout << g.getStudentGradeInfo2();
			}
			if (g.getTracker2() == 3)
			{
				cout << g.getStudentInfo1();
				cout << g.getStudentGradeInfo1();
				cout << g.getStudentInfo2();
				cout << g.getStudentGradeInfo2();
				cout << g.getStudentInfo3();
				cout << g.getStudentGradeInfo3();
			}


			break;
		case 'l':
			if (g.getTracker2() == 1)
			{
				cout << g.getStudentInfo1(); //displays student details
				//cout << g.getStudentGradeInfo1(); //displays student test average
			}
			if (g.getTracker2() == 2)
			{
				cout << g.getStudentInfo1();
				//cout << g.getStudentGradeInfo1();
				cout << g.getStudentInfo2();
				//cout << g.getStudentGradeInfo2();
			}
			if (g.getTracker2() == 3)
			{
				cout << g.getStudentInfo1();
				//cout << g.getStudentGradeInfo1();
				cout << g.getStudentInfo2();
				//cout << g.getStudentGradeInfo2();
				cout << g.getStudentInfo3();
				//cout << g.getStudentGradeInfo3();
			}


			break;
		case 'Q': quitKey = 'Q';
			break;
		case 'q': quitKey = 'q';
			break;
		default:
			cout << "Input must be either A, L, or Q" << endl; //Error message
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> quitKey;
			break;
		}
	}


	//Closing program statements
	return 0;
}