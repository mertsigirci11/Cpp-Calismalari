#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>

using namespace std;

class Malzeme
{
public:

	//Malzemenin değişkenlerini oluşturduk.
	string malzemeNo;
	string malzemeAdi;
	string malzemeBirim;
	string malzemeFiyat;
	string malzemeMarka;

	//Aşağıdaki fonksiyonların açıklamalarını Malzeme.cpp dosyasında yaptık.
	void BilgileriKullanıcıdanAl();
	void BilgileriYazdir();
};

