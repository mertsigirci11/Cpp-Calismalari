#include "ProjeListesi.h"

void ProjeListesi::ProjeEkle()
{
	string no;
	cout << "Proje Numarasi Giriniz : ";
	cin >> no;

	bool kontrol = true; //Numara benzerliði olmamasý için kontrol yapacaðýz.

	projeler[projeSayisi].projeNo= no; 
	string proje_no, proje_isim, proje_firma, proje_sorumlu, proje_kontorlor; //Projenin bilgilerini saklamak için deðiþken oluþturduk.

	fstream dosyaYolu2;
	fstream dosyaYolu3;
	dosyaYolu3.open("ProjeListesi.txt", ios::app);
	dosyaYolu2.open("ProjeListesi.txt", ios::out | ios::in | ios::app);

	while (dosyaYolu2 >> proje_no >> proje_isim >> proje_firma >> proje_sorumlu >> proje_kontorlor)
	{
		if (proje_no==no) //Kullanýcýnýn girdiði sayýyla ayný proje var mý diye kontol ettirdik. 
		{
			cout << "Ayni numaraya sahip proje var baska numara deneyin." << endl;
			kontrol = false;
			break;
		}
	}

	if (kontrol) //Dosyaya yazdýrma iþlemi yaptýk.
	{
		cout.setf(ios::left);
		projeler[projeSayisi].ProjeBilgileriAl(); //Oluþturduðumuz dizide ProjeBilgileriAl() fonksiyonundan yararlanýlarak bilgiler alýnýr.

		//Alýnan bilgiler ilgili dosyaya yazdýrýlýr.
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
	//Ana menüde kullanýcýdan aranacak numara istedik ve bunu parametre olarak fonksiyona gönderdik.

	Proje a;
	fstream dosyaYolu3("ProjeListesi.txt", ios::in);
	while (dosyaYolu3 >> a.projeNo >> a.projeAdi>> a.projeYurutucuFirma>> a.projeSorumlusu>> a.projeKontroloru)
	{
		if (a.projeNo == no) //Kullanýcýnýn aradýðý numara var mý onu aratýr. Ve bilgileri yazdýrýr.
		{
			a.ProjeBilgileriYazdir(); //Proje sýnýfýnda "ProjeBilgileriYazdir()" tanýmý yapýlmýþtýr.
		}

	}
	
	dosyaYolu3.close();
}

void ProjeListesi::ProjeSil(string no)
{
	//Burada kapsüllemeden esinlenerek bir iþlem yapýlmýþtýr.
	//Kullanýcýnýn seçtiði malzeme haricindeki tüm projeler baþka bir txt dosyasýna yazdýrýlýr.
	//Ana txt dosyasý silinip yeni yazdýrýlan dosyanýn ismi eski haline çevirilir.

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
