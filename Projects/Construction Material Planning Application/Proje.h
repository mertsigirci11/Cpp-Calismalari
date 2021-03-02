#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>

using namespace std;

class Proje
{
public:
	
	//Projenin deðiþkenlerini oluþturduk.
	string projeNo;
	string projeAdi;
	string projeYurutucuFirma;
	string projeSorumlusu;
	string projeKontroloru;


	//Aþaðýdaki fonksiyonlarýn açýklamalarýný Proje.cpp dosyasýnda yaptýk.
	void ProjeBilgileriAl();
	void ProjeBilgileriYazdir();
};

