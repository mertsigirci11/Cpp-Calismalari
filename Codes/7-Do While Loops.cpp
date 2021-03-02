#include <iostream>
using namespace std;
int main()
{
    //İlk önce istenileni yapar sonra kontrol eder.
    //Örneğin şartı sağlamayan bir şey yazılırsa o kod 1 kere de olsa çalışır.

    do
    {
        cout << "Sifir, birden buyuk degildir." << endl;
    } while (1<0);



    system("PAUSE");
}
