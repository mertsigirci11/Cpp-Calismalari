#include "ProjeListesi.h"

void ProjeListesi::ProjeEkle()
{
	string no;
	cout << "Proje Numarasi Giriniz : ";
	cin >> no;

	bool kontrol = true; //Numara benzerli�i olmamas� i�in kontrol yapaca��z.

	projeler[projeSayisi].projeNo= no; 
	string proje_no, proje_isim, proje_firma, proje_sorumlu, proje_kontorlor; //Projenin bilgilerini saklamak i�in de�i�ken olu�turduk.

	fstream dosyaYolu2;
	fstream dosyaYolu3;
	dosyaYolu3.open("ProjeListesi.txt", ios::app);
	dosyaYolu2.open("ProjeListesi.txt", ios::out | ios::in | ios::app);

	while (dosyaYolu2 >> proje_no >> proje_isim >> proje_firma >> proje_sorumlu >> proje_kontorlor)
	{
		if (proje_no==no) //Kullan�c�n�n girdi�i say�yla ayn� proje var m� diye kontol ettirdik. 
		{
			cout << "Ayni numaraya sahip proje var baska numara deneyin." << endl;
			kontrol = false;
			break;
		}
	}

	if (kontrol) //Dosyaya yazd�rma i�lemi yapt�k.
	{
		cout.setf(ios::left);
		projeler[projeSayisi].ProjeBilgileriAl(); //Olu�turdu�umuz dizide ProjeBilgileriAl() fonksiyonundan yararlan�larak bilgiler al�n�r.

		//Al�nan bilgiler ilgili dosyaya yazd�r�l�r.
		dosyaYolu3 << projeler[projeSayisi].projeNo
			<< setw(25) << projeler[projeSayisi].projeAdi
			<< setw(25) << projeler[projeSayisi].projeYurutucuFirma
			<< setw(25) << projeler[projeSayisi].projeSorumlusu
			<< setw(25) << projeler[projeSayisi].projeKontroloru
			<< endl;

	}
	
	kontrol = true;
	dosyaYolu2.close();
	dosyaYolu3.close();
}

void ProjeListesi::ProjeAraNumara(string no)
{
	//Ana men�de kullan�c�dan aranacak numara istedik ve bunu parametre olarak fonksiyona g�nderdik.

	Proje a;
	fstream dosyaYolu3("ProjeListesi.txt", ios::in);
	while (dosyaYolu3 >> a.projeNo >> a.projeAdi>> a.projeYurutucuFirma>> a.projeSorumlusu>> a.projeKontroloru)
	{
		if (a.projeNo == no) //Kullan�c�n�n arad��� numara var m� onu arat�r. Ve bilgileri yazd�r�r.
		{
			a.ProjeBilgileriYazdir(); //Proje s�n�f�nda "ProjeBilgileriYazdir()" tan�m� yap�lm��t�r.
		}

	}
	
	dosyaYolu3.close();
}

void ProjeListesi::ProjeSil(string no)
{
	//Burada kaps�llemeden esinlenerek bir i�lem yap�lm��t�r.
	//Kullan�c�n�n se�ti�i malzeme haricindeki t�m projeler ba�ka bir txt dosyas�na yazd�r�l�r.
	//Ana txt dosyas� silinip yeni yazd�r�lan dosyan�n ismi eski haline �evirilir.

	string proje_no, proje_isim, proje_firma, proje_sorumlu, proje_kontrolor;
	fstream dosyaYolu2;
	dosyaYolu2.open("ProjeListesi2.txt", ios::out | ios::in | ios::app);
	cout.setf(ios::left);
	while (dosyaYolu >> proje_no >> proje_isim >> proje_firma >> proje_sorumlu >> proje_kontrolor)
	{


		if (proje_no == no)
		{
			continue;
		}
		else
		{
			dosyaYolu2 << proje_no << setw(25) << proje_isim << setw(25)
				<< proje_firma << setw(25) << proje_sorumlu << setw(25) << proje_kontrolor << endl;

		}

	}


	dosyaYolu.close();
	dosyaYolu2.close();
	remove("ProjeListesi.txt");
	rename("ProjeListesi2.txt", "ProjeListesi.txt");
}
	
	
	
	
	
	


void ProjeListesi::ProjeRaporla()
{
	fstream DosyaRaporla("ProjeListesi.txt");
	string numara, ad, firma, sorumlu, kontrolor;

	while (DosyaRaporla>>numara>>ad>>firma>>sorumlu>>kontrolor)
	{
		cout << "Proje numarasi: " << numara << "     " << "Proje adi: " << ad << "     " 
			<< "Proje firmasi: " << firma<< "     " << "Proje sorumlusu: " << sorumlu << "     " 
			<< "Proje kontroloru: " << kontrolor<<endl;
	}
}
