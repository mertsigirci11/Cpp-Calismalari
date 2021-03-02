#include "Student.h"
#include <iostream>

using namespace std;

void Student::setAge(int age)
{
	this->age = age;
}

void Student::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::setGender(bool gender)
{
	this->gender = gender;
}

int Student::getAge()
{
	return age;
}

string Student::getFirstName()
{
	return firstName;
}

string Student::getLastName()
{
	return lastName;
}

bool Student::getGender()
{
	return gender;
}


