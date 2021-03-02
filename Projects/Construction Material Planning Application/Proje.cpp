#include "Proje.h"

void Proje::ProjeBilgileriAl()  //Bilgileri kullanýcýdan almak için fonksiyon oluþturduk.
{
	cout << "\nProje adi: ";
	cin >> projeAdi;

	cout << "\nProje yurutucu firma ismi: ";
	cin >> projeYurutucuFirma;
	
	cout << "\nProje sorumlusu: ";
	cin >> projeSorumlusu;
	
	cout << "\nProje kontroloru: ";
	cin >> projeKontroloru;

}

void Proje::ProjeBilgileriYazdir()  //Bilgileri txt dosyasýna yazdýrmak için fonksiyon oluþturduk.
{
	cout.setf(ios::left);
	cout << setw(25) << "Projenin numarasi: " << projeNo;
	cout << setw(25) << "\nProjenin adi: " << projeAdi;
	cout << setw(25) << "\nProjenin yurutucu firmasi: " << projeYurutucuFirma;
	cout << setw(25) << "\nProjenin sorumlusu: " << projeSorumlusu;
	cout << setw(25) << "\nProjenin kontoloru: " << projeKontroloru << endl;
}
