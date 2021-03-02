#include <iostream>
using namespace std;

class Ogrenci
{
private:

    string isim;
    int numara;

public:

	Ogrenci(string yazilacakIsim, int yazilacakNumara)
	{
		cout << "Yeni ogrenci olusturuldu."<<endl;
        isim = yazilacakIsim;
        numara = yazilacakNumara;
        cout << isim << " " << numara << endl;
	}

	Ogrenci(string yazilacakIsim) //OVERLOADING
	{
		isim = yazilacakIsim;
		numara = NULL;
		cout << isim << " " << numara << endl;
	}
};

int main()
{
    Ogrenci ogr1("Mert",1440);
	Ogrenci ogr2("Fatih");




	system("PAUSE");
}

