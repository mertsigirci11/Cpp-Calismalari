#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student ogrenci1;                       //Pointer ile oluşturmazsak "." kullanarak özelliklere erişebiliriz.
    ogrenci1.setAge(21);
    ogrenci1.setFirstName("Mert");
    ogrenci1.setLastName("Sigirci");
    ogrenci1.setGender(0);

    Student* ogrenci2 = new Student();       //Pointer ile oluşturursak "->" kullanarak özelliklere erişebiliriz.
    ogrenci2->setAge(6);
    ogrenci2->setFirstName("Elif Mina");
    ogrenci2->setLastName("Sigirci");
    ogrenci2->setGender(1);

    
}

