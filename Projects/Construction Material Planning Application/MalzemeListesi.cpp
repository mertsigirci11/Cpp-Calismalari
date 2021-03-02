#include "MalzemeListesi.h"

void MalzemeListesi::MalzemeEkle()
{
	string no;
	cout << "Malzeme Numarasi Giriniz : ";
	cin >> no;
	
	bool kontrol = true; //Numara benzerli�i olmamas� i�in kontrol yapaca��z.

	malzemeler[malzemeSayisi].malzemeNo = no;
	string urun_no, urun_isim, urun_birim, urun_fiyat, urun_marka; //Malzemelerin bilgilerini saklamak i�in de�i�ken olu�turduk.

	fstream dosyaYolu2;
	fstream dosyaYolu3;
	dosyaYolu3.open("MalzemeListesi.txt", ios::app);
	dosyaYolu2.open("MalzemeListesi.txt", ios::out | ios::in | ios::app);
	while (dosyaYolu2 >> urun_no >> urun_isim >> urun_birim >> urun_fiyat >> urun_marka)
	{
		if(urun_no==no) //Kullan�c�n�n girdi�i say�yla ayn� malzeme var m� diye kontol ettirdik.
		{
			cout << "Ayni numaraya sahip eleman var baska numara deneyin."<<endl;
			kontrol = false;
			break;
		}
	}

	if (kontrol)  //Dosyaya yazd�rma i�lemi yapt�k.
	{
		cout.setf(ios::left);
		malzemeler[malzemeSayisi].BilgileriKullan�c�danAl(); //Olu�turdu�umuz dizide MalzemeBilgileriAl() fonksiyonundan yararlan�larak bilgiler al�n�r.
		
		//Al�nan bilgiler ilgili dosyaya yazd�r�l�r.
		dosyaYolu3 <<malzemeler[malzemeSayisi].malzemeNo
			<< setw(25) << malzemeler[malzemeSayisi].malzemeAdi
			<< setw(25) << malzemeler[malzemeSayisi].malzemeBirim
			<< setw(25) << malzemeler[malzemeSayisi].malzemeFiyat
			<< setw(25) << malzemeler[malzemeSayisi].malzemeMarka
			<< endl;
	}
	kontrol = true;
	dosyaYolu2.close();
	dosyaYolu3.close();
}

void MalzemeListesi::MalzemeAraNumara(string numara)
{
	// Ana men�de kullan�c�dan aranacak numara istedik ve bunu parametre olarak fonksiyona g�nderdik.
	
	Malzeme a;
	fstream dosyaYolu3("MalzemeListesi.txt", ios::in);
	while (dosyaYolu3>>a.malzemeNo>>a.malzemeAdi>>a.malzemeBirim>>a.malzemeFiyat>>a.malzemeMarka)
	{
		if (a.malzemeNo==numara)  //Kullan�c�n�n arad��� numara var m� onu arat�r. Ve bilgileri yazd�r�r.
		{
			a.BilgileriYazdir(); //Malzeme s�n�f�nda "BilgileriYazdir()" tan�m� yap�lm��t�r.
			
		}
	}
	dosyaYolu3.close();
}

void MalzemeListesi::MalzemeRaporlama()
{
	fstream DosyaRaporla("MalzemeListesi.txt");
	string no, isim, birim, fiyat, marka;

	while (DosyaRaporla >> no >> isim >> birim >> fiyat >> marka)
	{
		cout << "Urun numarasi: " << no << "     " << "Urun adi: " << isim << "     "
			<< "Urun birimi: " << birim << "     " << "Urun fiyati: " << fiyat << "     "
			<< "Urun markasi: " << marka << endl;
	}
	
}

void MalzemeListesi::MalzemeSil(string no)
{
	//Burada kaps�llemeden esinlenerek bir i�lem yap�lm��t�r.
	//Kullan�c�n�n se�ti�i malzeme haricindeki t�m projeler ba�ka bir txt dosyas�na yazd�r�l�r.
	//Ana txt dosyas� silinip yeni yazd�r�lan dosyan�n ismi eski haline �evirilir.

	string urun_no,urun_isim,urun_birim,urun_fiyat,urun_marka;
	fstream dosyaYolu2;
	dosyaYolu2.open("MalzemeListesi2.txt", ios::out| ios::in | ios::app);
	cout.setf(ios::left);
	while (dosyaYolu>>urun_no>>urun_isim>>urun_birim>>urun_fiyat>>urun_marka)
	{
		

		if (urun_no==no)
		{
			continue;
		}
		else 
		{
			dosyaYolu2 << urun_no<<setw(25)<<urun_isim<< setw(25) 
					   << urun_birim<< setw(25) << urun_fiyat<< setw(25)<<urun_marka<<endl;

		}

	}


	dosyaYolu.close();
	dosyaYolu2.close();
	remove("MalzemeListesi.txt");
	rename("MalzemeListesi2.txt", "MalzemeListesi.txt");
}
