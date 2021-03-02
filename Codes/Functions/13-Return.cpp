#include <iostream>
using namespace std;

int toplama(int a, int b)
{
    return a + b;
}

/*
            Biz programcılar fonksiyonlara hangi değeri döndürmesini istiyorsak onun değişken tipine
            göre adlandırırız. Örneğin tam sayı bir değere sahip olmasını istiyorsak "void" yerine "int"
            yazarız, doğru veya yanlış bir değere sahip olmasını istiyorsak "void" yerine "boolean"
            yazarız.

            Şimdi boş, değer içermeyen fonksiyonlardan farklı olarak, bir değere sahip olan fonksiyonların
            sonunda "return" anahtar kelimesini kullanırız. "return" anahtar kelimesi fonksiyonun değerini
            içerir/döndürür.

            Değer içeren fonksiyonlar "return" anahtar kelimesinden sonra çalışmaz.

            Kısaca; "return", bize fonksiyondan çıktı almamızı sağlayan bir anahtar kelimedir.

            return ifadesi sayesinde fonksiyon ile elde ettiğimiz verileri başka bir değişkene aktarabiliriz veya başka bir yerde
            kullanabiliriz.
*/

int main()
{
    int m = 8;
    int n = 9;
    int k = toplama(m, n);

    cout << k<<endl;

    system("PAUSE");









}