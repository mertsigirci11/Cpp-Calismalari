#include <iostream>

using namespace std;

int main()
{
    string name = "Mert";

    string* nameAdress = &name;

    cout << nameAdress<<" "<<*nameAdress<<endl;

    string teams[] = { "Fenerbahce","Besiktas","Liverpool" };

    string* teamAdress =teams;

    for (int i = 0; i < 3; i++)
    {
        cout<<*(teamAdress + i) << endl;
    }

    system("PAUSE");
}

