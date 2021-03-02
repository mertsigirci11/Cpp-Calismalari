#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>

using namespace std;

class Proje
{
public:
	
	//Projenin değişkenlerini oluşturduk.
	string projeNo;
	string projeAdi;
	string projeYurutucuFirma;
	string projeSorumlusu;
	string projeKontroloru;


	//Aşağıdaki fonksiyonların açıklamalarını Proje.cpp dosyasında yaptık.
	void ProjeBilgileriAl();
	void ProjeBilgileriYazdir();
};

