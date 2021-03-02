#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string firstName, lastName;
	int age;

	/*
		cin fonksiyonu ile kullanıcıdan veri alırız.
	*/

	cout << "What is your first name :";
	cin >> firstName;

	cout << endl;

	cout << "What is your last name :";
	cin >> lastName;

	cout << endl;

	cout << "How old are you :";
	cin >> age;

	cout << "Your full name is " + firstName + " " + lastName<<endl;
	cout << "You age is: "+to_string(age);

	cout << endl;

	system("PAUSE");

}

