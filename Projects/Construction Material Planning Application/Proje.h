#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>

using namespace std;

class Proje
{
public:
	
	//Projenin de�i�kenlerini olu�turduk.
	string projeNo;
	string projeAdi;
	string projeYurutucuFirma;
	string projeSorumlusu;
	string projeKontroloru;


	//A�a��daki fonksiyonlar�n a��klamalar�n� Proje.cpp dosyas�nda yapt�k.
	void ProjeBilgileriAl();
	void ProjeBilgileriYazdir();
};

