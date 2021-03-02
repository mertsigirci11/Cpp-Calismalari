#include "Malzeme.h"
#include"MalzemeListesi.h"

void Malzeme::BilgileriKullan�c�danAl() //Bilgileri kullan�c�dan almak i�in fonksiyon olu�turduk.
{

	cout << "\nMalzemenin adi: ";
	cin >> malzemeAdi;

	cout << "\nMalzemenin birimi: ";
	cin >> malzemeBirim;

	cout << "\nMalzemenin birim fiyat�: ";
	cin >>malzemeFiyat;

	cout << "\nMalzemenin markasi: ";
	cin >> malzemeMarka;
}

void Malzeme::BilgileriYazdir() //Bilgileri txt dosyas�na yazd�rmak i�in fonksiyon olu�turduk.
{
	cout.setf(ios::left);
	cout << setw(25) << "Malzemenin numarasi: " << malzemeNo;
	cout << setw(25) << "\nMalzemenin adi: "<<malzemeAdi;
	cout << setw(25) << "\nMalzemenin birimi: "<<malzemeBirim;
	cout << setw(25) << "\nMalzemenin birim fiyat�: "<<malzemeFiyat;
	cout << setw(25) << "\nMalzemenin markasi: "<<malzemeMarka<<endl; 

}
