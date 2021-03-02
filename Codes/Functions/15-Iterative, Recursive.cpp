#include <iostream>
using namespace std;

int faktoriyel1(int a) //TEKRARLAYAN(ITERATIVE)
{
    if (a==1 || a==0)
    {
        return 1;
    }
    if(a>=2)
    { 
        return a * faktoriyel1(a - 1);
    }

    if(a<0)
    {
        return NULL;
    }
}  

int faktoriyel2(int a) //ÖZYİNELEMELİ(RECURSIVE)
{
    int sonuc = 1;
    
    if (a>=1)
    {
        for (a; a >= 1; a--)
        {
            sonuc *= a;
        }
        
        return sonuc;
    }

    else if (a==0)
    {
        return 1;
    }

    else
    {
        return NULL;
    }

    
    
}

int main()
{
    cout << faktoriyel1(5)<<endl;
    cout << faktoriyel2(4)<<endl;
    system("PAUSE");
}

