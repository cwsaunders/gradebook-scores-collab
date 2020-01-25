#pragma once

//Base/parent class

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

class StudentInfo
{
	std::string studentName;
	int studentID;
	std::string major;

public:

	StudentInfo() = default;

	StudentInfo(std::string, int, std::string);

	void setStudentName(std::string);

	std::string getStudentName();

	void setStudentID(int);

	int getStudentID();

	void setMajor(std::string);

	std::string getMajor();

	~StudentInfo() = default;

	bool operator==(const StudentInfo&) const;

	friend std::ostream& operator<<(std::ostream&, const StudentInfo&);

};
