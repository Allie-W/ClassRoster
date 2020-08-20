#include <string>
#include <iostream>
#include "student.h"
#include "degree.h"
#include "roster.h"

using namespace std;

/*
B.
*Create a C++ project in your integrated development environment (IDE) with the following files:
*degree.h
*student.h and student.cpp
*roster.h and roster.cpp
*main.cpp
*Note: There must be a total of six source code files.
*/

int main() {

/*
F-1.
Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
*/
	cout << "Course: C867 Scripting and Programming - Applications" << endl;
	cout << "Language: C++" << endl;
	cout << "By: Alyssa Weiglein - ID 001104678\n" << endl;

/*
A.
Modify the “studentData Table” to include your personal information as the last item.
*/
	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Alyssa,Weiglein,aweigle@wgu.edu,32,25,36,15,SOFTWARE"
	};

	int numStudents = 5;
/*
F-2.
Create an instance of the Roster class called classRoster.
*/
	Roster* classRoster = new Roster(numStudents);

	for (int i = 0; i < numStudents; i++) {
		classRoster->parseAndAdd(studentData[i]);
	}
/*
F-4.
Convert the following pseudo code to complete the rest of the  main() function:
*/
	cout << "Class Roster: " << endl;
	classRoster->printAll();


	cout << endl;

	cout << "Invalid e-mail addresses: " << endl;
	classRoster->printInvalidEmails();

	cout << endl;

	cout << "Average days in course: " << endl;
	for (int i = 0; i < numStudents; i++) {
		classRoster->printAverageDaysInCourse(classRoster->getStudentAt(i)->getStudentID());
	}

	cout << endl;

	cout << "Students in the Software program: " << endl;
	classRoster->printByDegreeProgram(DegreeProgram::SOFTWARE);

	cout << endl;

	classRoster->remove("A3");

	cout << endl;

	classRoster->printAll();

	cout << endl;

	classRoster->remove("A3");

	return 0;
}

/*
G.
Demonstrate professional communication in the content and presentation of your submission.
*/