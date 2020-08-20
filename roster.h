#pragma once
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;


/*
E-3.
Define the following functions:
a.public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.
b.public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
c.public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
d.public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
e.public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
f.public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.
*/
class Roster {
public:
	int index;
	int rosterSize;
	Student** classRosterArray;
	Roster();
	Roster(int rosterSize);
	void parseAndAdd(string row);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	bool remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degree);
	Student* getStudentAt(int index);

/*
F-5.
Implement the destructor to release the memory that was allocated dynamically in Roster.
*/
	~Roster();

};