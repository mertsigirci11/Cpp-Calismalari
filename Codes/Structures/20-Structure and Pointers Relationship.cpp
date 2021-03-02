#include <iostream>
using namespace std;

struct Student
{
    string firstName;
};

void changeName1(Student* studentObject, string newName)
{
    /*
        Bu fonksiyonda Student yapısının adresini aldık. Ve ram e giderek
        o adresteki değiştirmek istediğimiz bilgiyi değiştirdik.
    */
    studentObject->firstName = newName;
    cout << "Ogrencinin yeni ismi: " + newName << endl;
}

void changeName2(Student student, string name)
{
    cout << "Ogrencinin eski adi: " + student.firstName << endl;
    student.firstName = name;
    cout << "Ogrencinin yeni adi: " + student.firstName << " olarak degisti" << endl;

    /*
        Bu fonksiyonda ise Student yapısının adresi alınmadığı için bellekte/ramde
        yeni bir geçici yapı oluştu(parametre olarak yazılan nesnenin klonu gibi düşün). 
        Bu yapının adı değiştirildi.
    */
}

int main()
{
    Student student;

    student.firstName = "Mert";

    cout << "Student name: " << student.firstName<<endl;
    
    cout << "changeName1 foksiyonu calisti: "<<endl;
    changeName1(&student, "Mina"); 
//Nesneyi tutması için fonksiyona pointer tanımladığımız için adresiyle ( & ) yazmak lazım.
    
    cout << "changeName2 fonksiyonu calisti: "<<endl;
    changeName2(student, "Sencer");

    cout << "VE SON OLARAK: " << endl;
    cout << "Student name: " << student.firstName;





}
