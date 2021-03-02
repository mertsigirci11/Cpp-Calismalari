#include <iostream>
using namespace std;

void reverseNumber(int *number1,int *number2) 
{
    int temp;
    temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

int main()
{
    int number = 11;

    int* numberAdress;

    numberAdress = &number;

    cout << "Sayi: " << number<<endl;
    cout << "Sayinin adresi: " << numberAdress << endl;
    cout << "*numberAdress: " << *numberAdress << endl;


    //Oluşturulan iki değişkenin değerlerini birbirleri ile değiştirelim.

    int a, b;
    cout << "2 tane sayi giriniz:";
    cin >> a >> b;

    cout << "sayi1: " << a << " sayi2: " << b<<endl;

    reverseNumber(&a, &b); //Sayının adreslerini verdik. Böylece * işareti ile sayı adreslerindeki değerler tutuldu.

    cout << "sayi1: " << a << " sayi2: " << b<<endl;

    system("PAUSE");


}

