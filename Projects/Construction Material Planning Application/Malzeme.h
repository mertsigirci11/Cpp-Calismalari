#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>

using namespace std;

class Malzeme
{
public:

	//Malzemenin deðiþkenlerini oluþturduk.
	string malzemeNo;
	string malzemeAdi;
	string malzemeBirim;
	string malzemeFiyat;
	string malzemeMarka;

	//Aþaðýdaki fonksiyonlarýn açýklamalarýný Malzeme.cpp dosyasýnda yaptýk.
	void BilgileriKullanýcýdanAl();
	void BilgileriYazdir();
};

