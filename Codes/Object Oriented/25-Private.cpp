#include <iostream>

using namespace std;

class Ogrenci
{
private:
    int notlar;

public:
    string ad, soyad;
};

int main()
{
    Ogrenci ogr1;
    ogr1.ad = "Mert";
    ogr1.soyad = "Sİgirci";
    // ogr1.notlar private olduğu için ulaşılmaz....
}

