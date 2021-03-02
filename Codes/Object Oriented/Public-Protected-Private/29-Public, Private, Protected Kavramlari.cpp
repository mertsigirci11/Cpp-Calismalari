#include <iostream>
#include "Miras_Alacak_Sinif.h"
#include "Private_Sinifi.h"
#include "Protected_Sinifi.h"
#include "Public_Sinifi.h"

using namespace std;

int main()
{
    /*
        -Eğer bir değer veya fonksiyon public ise her yerden ulaşılabilir.
        -Eğer bir değer veya fonksiyon protected ise sadece kalıtım alınan yerden 
         ulaşılabilir.
        -Eğer bir değer veya fonksiyon private ise sadece kendi class'ından 
         ulaşılabilir.

    */
    Miras_Alacak_Sinif deneme1;
    deneme1.setMesaj_Public("Ben public erisime sahibim.");
    deneme1.getMesaj_Public();
    deneme1.mesaj_public = "AAAA";
}

