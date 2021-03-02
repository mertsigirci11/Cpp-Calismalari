#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Çarpım tablosu uygulaması yapalım.

	for (int i = 0;  i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			cout << setw(3) << i << "x" << j  <<"="<<  i * j << setw(3);
		}
		cout << endl << endl << endl << endl;
	}

	system("PAUSE");



}

