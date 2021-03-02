#include <iostream>
using namespace std;

class Altin
{
public:
    int kullanilma_miktari;
    void neKadarKullanildi()
    {
        cout << kullanilma_miktari << endl;
    }
};
class Demir
{
public:
    int kullanilma_miktari;
    void neKadarKullanildi()
    {
        cout << kullanilma_miktari << endl;
    }
};
class MetalParca :public Altin, public Demir
{
public:
    int kullanilanAltin;
    int kullanilanDemir;
};

int main()
{
    MetalParca m1;
    m1.kullanilanAltin = 5;
    m1.kullanilanDemir = 15;

    

    /*
        
        m1.kullanilma_miktari = 5; (Altın için)
        m1.kullanilma_miktari = 15; (Demir için)

        m1.neKadarKullanildi(); 
        
        
        Böyle yazarsak çakışma olur. Derleyici hangi metodu seçtiğimizi bilemez. Çünkü Demir ve Altın classlarında
        aynı isimden metotlar var. Bunun için şöyle yapmalıyız...
    */

    /*
        örnek_ismi.Sinif_ismi :: gerekli_operasyon
        şeklinde yazmalıyız
    */

    m1.Altin::kullanilma_miktari = m1.kullanilanAltin;
    m1.Demir::kullanilma_miktari = m1.kullanilanDemir;

    m1.Altin::neKadarKullanildi();
    m1.Demir::neKadarKullanildi();

    
}

