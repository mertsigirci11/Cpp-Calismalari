#include <iostream>
using namespace std;
int main()
{
    int sayi;
    cout << "Lutfen bir tam sayi giriniz.";
    cin >> sayi;

    if (sayi != 0)
    {
        if(sayi%2==0)
        {
            cout << "Girilen sayi cifttir.";
        }

        else if (sayi%2 != 0)
        {
            cout << "Girilen sayi tektir.";
        }
    }

    else
    {
        cout << "Girilen sayi 0'dir. ";
    }

    system("PAUSE");
}

