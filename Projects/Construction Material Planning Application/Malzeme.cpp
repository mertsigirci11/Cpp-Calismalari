#include "Malzeme.h"
#include"MalzemeListesi.h"

void Malzeme::BilgileriKullanýcýdanAl() //Bilgileri kullanýcýdan almak için fonksiyon oluþturduk.
{

	cout << "\nMalzemenin adi: ";
	cin >> malzemeAdi;

	cout << "\nMalzemenin birimi: ";
	cin >> malzemeBirim;

	cout << "\nMalzemenin birim fiyatý: ";
	cin >>malzemeFiyat;

	cout << "\nMalzemenin markasi: ";
	cin >> malzemeMarka;
}

void Malzeme::BilgileriYazdir() //Bilgileri txt dosyasýna yazdýrmak için fonksiyon oluþturduk.
{
	cout.setf(ios::left);
	cout << setw(25) << "Malzemenin numarasi: " << malzemeNo;
	cout << setw(25) << "\nMalzemenin adi: "<<malzemeAdi;
	cout << setw(25) << "\nMalzemenin birimi: "<<malzemeBirim;
	cout << setw(25) << "\nMalzemenin birim fiyatý: "<<malzemeFiyat;
	cout << setw(25) << "\nMalzemenin markasi: "<<malzemeMarka<<endl; 

}
