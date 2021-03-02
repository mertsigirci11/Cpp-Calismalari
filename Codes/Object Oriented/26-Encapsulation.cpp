#include <iostream>
using namespace std;

class Ogrenci
{
private:
    
    string isim;
    int numara;
    
public:
    
    void ozellikleriniGoster()
    {
        cout<< isim << " " << numara << endl;
    }

    void setIsim(string yazilacakIsim)   //Private olan değişkenleri fonksiyon kullanarak kapsülledik ve işlem yaptık.
    {
        isim = yazilacakIsim;
    }

    string getIsim()
    {
        return isim;
    }

    void setNumara(int yazilacakNumara)  //Private olan değişkenleri fonksiyon kullanarak kapsülledik ve işlem yaptık.
    {
        numara = yazilacakNumara;
    }

    int getNumara()
    {
        return numara;
    }

};


int main()
{
    Ogrenci ogr1;

    ogr1.setIsim("Mert");
    ogr1.setNumara(1440);

    ogr1.ozellikleriniGoster();
    cout << ogr1.getIsim() << " " << ogr1.getNumara()<<endl;

    system("PAUSE");
}