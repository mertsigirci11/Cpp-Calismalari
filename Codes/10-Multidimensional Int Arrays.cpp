#include <iostream>
using namespace std;

int main()
{
    int matris1[4][4] = { {1,2,3,4},{5,6,7,8},{9,5,3,1},{8,4,6,2} };
    
    //Yukarıda yazdığımız her dörtlü, bir satırı temsil eder.

    int matris2[3][3] = {}; //İçine bir şey yazmadığımız için hepsine, otomatik olarak 0 değeri verildi.

    for (int i = 0; i < 4; i++)  //Matris1 in elemanlarını yazdırdık.
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matris1[i][j]<<" ";
        }
        cout << endl;
    }

    cout << endl << endl << endl << endl;

    for (int i = 0; i < 3; i++) //Matris2 nin elemanlarını yazdırdık.
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matris2[i][j] << " ";
        }
        cout << endl;
    }

    
        system("PAUSE");
}

