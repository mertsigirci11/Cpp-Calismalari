#include <iostream>
using namespace std;


void diziElemanBastir(int dizi[], int boyut)
{
    for (int i = 0; i < boyut; i++)
    {
        cout << dizi[i] << " ";
    }
    cout << endl;
}
    /*
        2 türlü fonksiyon tanımlanabilir:
            1- Main fonksiyondan önce fonksiyon tanımlanır ve açıklaması yapılır. ( diziElemanBastir() )
            2- Main fonksiyonundan önce tanımlaması yapılır. Main fonksiyonundan sonra açıklaması yapılır. ( konusmaYap() )

        Fonksiyonlar mutlaka main fonksiyonundan önce yazılmalıdır. Çünkü c++ yukarıdan aşağı doğru okunan bir dildir.
    */

void konusmaYap();

 int main()
 {
     

     int dizi1[6] = { 11,8,1999,17,4,2000 };
     int dizi2[12] = { 0,1,2,3,4,5,6,7,8,9,10,11 };

     konusmaYap();
     diziElemanBastir(dizi1, 6);
     diziElemanBastir(dizi2, 12);

     system("PAUSE");
}

 void konusmaYap()
 {
     cout << "Merhaba dizi eleman bastirma uygulamasina hosgeldiniz." << endl;
 }


 