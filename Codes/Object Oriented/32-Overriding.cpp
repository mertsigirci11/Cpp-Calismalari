#include <iostream>
using namespace std;

class Insan
{
public:
    void konusmaYap()
    {
        cout << "Merhaba ben bir insanim." << endl;
    }
};

class Kedi
{
public:
    void konusmaYap()
    {
        cout << "Miyav Miyav Miyav" << endl;
    }
};

class Canli:public Kedi, public Insan
{
public:
    string isim;
};
int main()
{
    Canli c1;
    Canli c2;

    Kedi* k1;
    Insan* i1;

    i1 = &c1;
    k1 = &c2;

    c1.isim = "Mert";
    i1->konusmaYap();
    c2.isim = "Tekir";
    k1->konusmaYap();
    c1.Insan::konusmaYap();
    c2.Kedi::konusmaYap();
    
}
