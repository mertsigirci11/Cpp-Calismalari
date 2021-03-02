#pragma once 
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Proje.h"

using namespace std;

class ProjeListesi : Proje //Proje s�n�f�ndaki bilgileri kullanabilmek i�in miras ald�rd�k.
{
public:
	Proje projeler[100]; //Proje ekleme/silme gibi i�lemleri yapabilmek i�in projeler dizisi olu�turduk.
	fstream dosyaYolu;
	int projeSayisi;

	ProjeListesi() //Kurucu fonksiyonda dosya yolunu a�t�k.
	{
		projeSayisi = 0;
		dosyaYolu.open("ProjeListesi.txt", ios::out | ios::in | ios::app);
		cout.setf(ios::left);
	}

	//A�a��daki fonksiyonlar�n a��klamalar�n� ProjeListesi.cpp dosyas�nda yapt�k.
	void ProjeEkle();
	void ProjeAraNumara(string no);
	void ProjeSil(string no);
	void ProjeRaporla();
};

