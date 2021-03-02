#include <iostream>

using namespace std;

int main()
{
    const int corum = 19; //Oluşturulan değişken hiçbir şekilde değiştirilemez.
    const int sakarya = 54; //Oluşturulan değişken hiçbir şekilde değiştirilemez.
    
    int number = 13;
    int& ref = number;
    ref++; 
    //Sayının adresine erişti ve adresteki değere işlem yaptı.
    cout << number;
}

