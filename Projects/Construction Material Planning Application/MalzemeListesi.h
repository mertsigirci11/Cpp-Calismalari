#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Malzeme.h"

using namespace std;

class MalzemeListesi : Malzeme //Malzeme sýnýfýndaki bilgileri kullanabilmek için miras aldýrdýk.
{
public:
	Malzeme liste;
	Malzeme malzemeler[100]; //Ürün ekleme/silme gibi iþlemleri yapabilmek için malzemeler dizisi oluþturduk.
	fstream dosyaYolu;
	int malzemeSayisi;

	MalzemeListesi() //Kurucu fonksiyonda dosya yolunu açtýk.
	{
		 malzemeSayisi=0;
		 dosyaYolu.open("MalzemeListesi.txt", ios::out | ios::in | ios::app);
		 cout.setf(ios::left);
	}

	//Aþaðýdaki fonksiyonlarýn açýklamalarýný MalzemeListesi.cpp dosyasýnda yaptýk.
	void MalzemeEkle();
	void MalzemeAraNumara(string);
	void MalzemeRaporlama();
	void MalzemeSil(string);

	


};

