#pragma once
#include <string>
#include "degree.h"

using namespace std;

/*
D-1.
Create the class Student in the files student.h and student.cpp,
which includes each of the following variables:
student ID
first name
last name
email address
age
array of number of days to complete each course
degree program
*/
class Student {
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];
	DegreeProgram degreeProgram;

/*
D-2.
Create each of the following functions in the Student class :
a.an accessor(i.e., getter) for each instance variable from part D1
b.a mutator(i.e., setter) for each instance variable from part D1
c.All external accessand changes to any instance variables of the Student class must be done using accessorand mutator functions.
d.constructor using all of the input parameters provided in the table
e.print() to print specific student data
*/
public:
	const static int daysArraySize = 3;

//empty constructor
	Student();

//constructor
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram);

//getters
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int* getDaysInCourse();
	DegreeProgram getDegree();

//setters
	void setSudentID(string studentID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmailAddress(string emailAddress);
	void setAge(int age);
	void setDaysInCourse(int daysInCourse[]);
	void setDegree(DegreeProgram degree);
	void print();

//destructor
	~Student();

};
