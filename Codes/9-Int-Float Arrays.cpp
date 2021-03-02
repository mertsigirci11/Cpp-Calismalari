#include <iostream>
using namespace std;

int main()
{
    int rakamlar[12] = { 0,1,2,3,4,5,6,7,8,9 };
    rakamlar[10] = 10;
    rakamlar[11] = 11;
    rakamlar[12] = 12;
    
    for (int i = 0; i <= 12; i++)
    {
        cout << "Dizinin " << i + 1 << ". elemani " << rakamlar[i] << "dir." << endl;
    }





    system("PAUSE");
}

