#pragma once
#include <iostream>

using namespace std;

class Student
{
private:
	int age;
	string firstName;
	string lastName;
	bool gender;

public:

	void setAge(int age);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setGender(bool gender);

	int getAge();
	string getFirstName();
	string getLastName();
	bool getGender();


};

