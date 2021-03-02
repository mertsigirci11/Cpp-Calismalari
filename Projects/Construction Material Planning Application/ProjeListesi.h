#pragma once 
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Proje.h"

using namespace std;

class ProjeListesi : Proje //Proje sýnýfýndaki bilgileri kullanabilmek için miras aldýrdýk.
{
public:
	Proje projeler[100]; //Proje ekleme/silme gibi iþlemleri yapabilmek için projeler dizisi oluþturduk.
	fstream dosyaYolu;
	int projeSayisi;

	ProjeListesi() //Kurucu fonksiyonda dosya yolunu açtýk.
	{
		projeSayisi = 0;
		dosyaYolu.open("ProjeListesi.txt", ios::out | ios::in | ios::app);
		cout.setf(ios::left);
	}

	//Aþaðýdaki fonksiyonlarýn açýklamalarýný ProjeListesi.cpp dosyasýnda yaptýk.
	void ProjeEkle();
	void ProjeAraNumara(string no);
	void ProjeSil(string no);
	void ProjeRaporla();
};

