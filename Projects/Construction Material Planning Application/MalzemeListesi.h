#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Malzeme.h"

using namespace std;

class MalzemeListesi : Malzeme //Malzeme s�n�f�ndaki bilgileri kullanabilmek i�in miras ald�rd�k.
{
public:
	Malzeme liste;
	Malzeme malzemeler[100]; //�r�n ekleme/silme gibi i�lemleri yapabilmek i�in malzemeler dizisi olu�turduk.
	fstream dosyaYolu;
	int malzemeSayisi;

	MalzemeListesi() //Kurucu fonksiyonda dosya yolunu a�t�k.
	{
		 malzemeSayisi=0;
		 dosyaYolu.open("MalzemeListesi.txt", ios::out | ios::in | ios::app);
		 cout.setf(ios::left);
	}

	//A�a��daki fonksiyonlar�n a��klamalar�n� MalzemeListesi.cpp dosyas�nda yapt�k.
	void MalzemeEkle();
	void MalzemeAraNumara(string);
	void MalzemeRaporlama();
	void MalzemeSil(string);

	


};

