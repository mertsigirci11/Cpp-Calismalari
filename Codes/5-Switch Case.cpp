#include <iostream>
using namespace std;
int main()
{
	int day;

	cout << "1'den 7'ye kadar bir rakam girin ve hangi gune geldigini gorun." << endl;
	cin >> day;
	
	switch (day)
	{
	case 1: cout << "Pazartesi"<<endl;
		break;
	case 2: cout << "Sali" << endl;
		break;
	case 3: cout << "Carsamba" << endl;
		break;
	case 4: cout << "Persembe" << endl;
		break;
	case 5: cout << "Cuma" << endl;
		break;
	case 6: cout << "Cumartesi" << endl;
		break;
	case 7: cout << "Pazar" << endl;
		break;

	default:
		cout << "Girilen rakamlar gun sayisina tekabul etmemektedir.";
	}

	system("PAUSE");
}

