#include <string>
#include <iostream>
#include "degree.h"
#include "student.h"

using namespace std;

/*
D-1.
*Create the class Student in the files student.h and student.cpp,
*which includes each of the following variables:
*student ID
*first name
*last name
*email address
*age
*array of number of days to complete each course
*degree program
*/


Student::Student() {
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->age = 0;
	for (int i = 0; i < daysArraySize; ++i) {
		this->daysInCourse[i] = 0;
	}
	this->degreeProgram = DegreeProgram::UNDECIDED;

}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	for (int i = 0; i < daysArraySize; ++i) {
		this->daysInCourse[i] = daysInCourse[i];
	}
	this->degreeProgram = degreeProgram;
}

string Student::getStudentID() {
	return studentID;
}

string Student::getFirstName() {
	return firstName;
}

string Student::getLastName() {
	return lastName;
}

string Student::getEmailAddress() {
	return emailAddress;
}

int Student::getAge() {
	return age;
}


int* Student::getDaysInCourse() {
	return daysInCourse;
}

DegreeProgram Student::getDegree() {
	return degreeProgram;
}

void Student::setSudentID(string studentID) {
	this->studentID = studentID;
}

void Student::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Student::setLastName(string lastName) {
	this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
	this->age = age;
}

void Student::setDaysInCourse(int daysInCourse[]) {
	for (int i = 0; i < daysArraySize; i++) {
		this->daysInCourse[i] = daysInCourse[i];
	}
}

void Student::setDegree(DegreeProgram degreeProgram) {
	this->degreeProgram = degreeProgram;
}

void Student::print() {
	std::cout << getStudentID() << "\t" << getFirstName() << "\t" << getLastName() << "\t" << getEmailAddress() << "\t" << getAge() << "\t";
	int* day = getDaysInCourse();
	cout << day[0] << "\t" << day[1] << "\t" << day[2] << "\t";
	cout << degreeProgramStr[(int)getDegree()] << endl;
}

Student::~Student() {

}
