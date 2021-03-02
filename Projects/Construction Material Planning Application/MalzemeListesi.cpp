#include "MalzemeListesi.h"

void MalzemeListesi::MalzemeEkle()
{
	string no;
	cout << "Malzeme Numarasi Giriniz : ";
	cin >> no;
	
	bool kontrol = true; //Numara benzerliði olmamasý için kontrol yapacaðýz.

	malzemeler[malzemeSayisi].malzemeNo = no;
	string urun_no, urun_isim, urun_birim, urun_fiyat, urun_marka; //Malzemelerin bilgilerini saklamak için deðiþken oluþturduk.

	fstream dosyaYolu2;
	fstream dosyaYolu3;
	dosyaYolu3.open("MalzemeListesi.txt", ios::app);
	dosyaYolu2.open("MalzemeListesi.txt", ios::out | ios::in | ios::app);
	while (dosyaYolu2 >> urun_no >> urun_isim >> urun_birim >> urun_fiyat >> urun_marka)
	{
		if(urun_no==no) //Kullanýcýnýn girdiði sayýyla ayný malzeme var mý diye kontol ettirdik.
		{
			cout << "Ayni numaraya sahip eleman var baska numara deneyin."<<endl;
			kontrol = false;
			break;
		}
	}

	if (kontrol)  //Dosyaya yazdýrma iþlemi yaptýk.
	{
		cout.setf(ios::left);
		malzemeler[malzemeSayisi].BilgileriKullanýcýdanAl(); //Oluþturduðumuz dizide MalzemeBilgileriAl() fonksiyonundan yararlanýlarak bilgiler alýnýr.
		
		//Alýnan bilgiler ilgili dosyaya yazdýrýlýr.
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
	// Ana menüde kullanýcýdan aranacak numara istedik ve bunu parametre olarak fonksiyona gönderdik.
	
	Malzeme a;
	fstream dosyaYolu3("MalzemeListesi.txt", ios::in);
	while (dosyaYolu3>>a.malzemeNo>>a.malzemeAdi>>a.malzemeBirim>>a.malzemeFiyat>>a.malzemeMarka)
	{
		if (a.malzemeNo==numara)  //Kullanýcýnýn aradýðý numara var mý onu aratýr. Ve bilgileri yazdýrýr.
		{
			a.BilgileriYazdir(); //Malzeme sýnýfýnda "BilgileriYazdir()" tanýmý yapýlmýþtýr.
			
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
	//Burada kapsüllemeden esinlenerek bir iþlem yapýlmýþtýr.
	//Kullanýcýnýn seçtiði malzeme haricindeki tüm projeler baþka bir txt dosyasýna yazdýrýlýr.
	//Ana txt dosyasý silinip yeni yazdýrýlan dosyanýn ismi eski haline çevirilir.

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
