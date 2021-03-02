#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>

using namespace std;

class Malzeme
{
public:

	//Malzemenin de�i�kenlerini olu�turduk.
	string malzemeNo;
	string malzemeAdi;
	string malzemeBirim;
	string malzemeFiyat;
	string malzemeMarka;

	//A�a��daki fonksiyonlar�n a��klamalar�n� Malzeme.cpp dosyas�nda yapt�k.
	void BilgileriKullan�c�danAl();
	void BilgileriYazdir();
};

