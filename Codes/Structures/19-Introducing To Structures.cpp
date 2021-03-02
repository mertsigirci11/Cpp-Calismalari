#include <iostream>
using namespace std;

struct Student
{
    int number;
    string firstName;
    string lastName;
    string department;
    bool gender;//1:Male , 0:Female
};

int main()
{
    Student mert;
    //VEYA Student mert = {121210078, "Mert", "Sigirci", "Computer Science", 1} şeklinde de tanımlayabilirdik.

    

    mert.number = 191210078;
    mert.firstName = "Mert";
    mert.lastName = "Sigirci";
    mert.department = "Computer Science";
    mert.gender = 1;

    cout << mert.number << endl << mert.firstName << " " << mert.lastName << endl << mert.department << endl << mert.gender << endl;
    system("PAUSE");

}

