#include <iostream>
using namespace std;

class Human
{
public:
	string firstName,lastName;
	int age;

	void greetings()
	{
		cout << "Hello my name is " << firstName << " " << lastName << ". I am " << age << " years old."<<endl;
	}


};

int main()
{
	Human hmn1;
	hmn1.firstName = "Mert"; hmn1.lastName = "Sigirci"; hmn1.age = 21;
	hmn1.greetings();

	system("PAUSE");
}
