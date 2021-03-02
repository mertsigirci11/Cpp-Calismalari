#include <iostream>
using namespace std;

class Ogrenci
{
private:
    string isim;
    int yas; 



public:

    Ogrenci()
    {
        this->isim = "null";        // "this" kısmı önemli !!!!!!!!!!!!
        this->yas = NULL;
    }

    string getIsim()
    {
        return isim;
    }

    int getYas()
    {
        return yas;
    }

    

};

int main()
{
    Ogrenci ogr1;

    cout << ogr1.getIsim() << " " << ogr1.getYas() << endl;
    
    system("PAUSE");
}

