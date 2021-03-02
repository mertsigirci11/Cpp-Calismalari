#include <iostream>
#include <sstream> 

using namespace std;

int main()
{
	//Faktöriyel hesabı yapalım
	
	int sayi;
	cout << "Faktoriyeli alinmasini istediginiz bir sayi giriniz : ";
	cin >> sayi;

	if (sayi == 0)
	{
		cout << "Girdiginiz sayinin faktoriyeli 1'dir.";
	}
	else
	{
		int sonuc = 1;
		while (sayi>=1)
		{
			sonuc *= sayi;
			sayi--;
		}
		cout << "Girdiginiz sayinin faktoriyeli " + to_string(sonuc) + "'dir."<<endl<<endl;
	}






	system("PAUSE");
}

