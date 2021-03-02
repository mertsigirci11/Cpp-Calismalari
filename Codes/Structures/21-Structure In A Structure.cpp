#include <iostream>
using namespace std;



struct Kategori
{
    string isim;
    int urunAdedi;
};
struct Reyon
{
    string isim;
    bool acikMi;
    int urunSayisi;
    Kategori kategoriOzellikleri;
};

void StoktanDusur(Reyon* reyonAdi, int satilanUrun)
{
    reyonAdi->kategoriOzellikleri.urunAdedi -= satilanUrun;
    reyonAdi->urunSayisi -= satilanUrun;
}


int main()
{
    Reyon r1;
    r1.acikMi = 1;
    r1.isim = "Kuru Gida";
    r1.urunSayisi = 200;
    r1.kategoriOzellikleri.isim = "Makarna";
    r1.kategoriOzellikleri.urunAdedi = 130;

    cout << "Reyon ismi: " << r1.isim << endl;
    cout << "Reyondaki urun sayisi: " << r1.urunSayisi << endl;
    cout << "Reyon acik mi: " << r1.acikMi << endl;
    cout << "Reyondaki kategori: " << r1.kategoriOzellikleri.isim << endl;
    cout << "Kategorideki urun sayisi: " << r1.kategoriOzellikleri.urunAdedi << endl;

    StoktanDusur(&r1, 100);

    cout << "Reyondaki urun sayisi: " << r1.urunSayisi << endl;
    cout << "Kategorideki urun sayisi: " << r1.kategoriOzellikleri.urunAdedi << endl;

    system("PAUSE");






}

