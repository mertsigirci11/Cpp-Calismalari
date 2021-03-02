#include <iostream>
using namespace std;

/*
			Metotlarda aşırı yükleme nasıl yapılır?

			Bir metot oluşturulduktan sonra aynı isimle bir tane daha veya birden fazla aynı isimde metot
			oluşturulmasına "AŞIRI YÜKLEME" denir.

			Yani metotları aşırı yüklediğimizde metotları birden fazla şekilde farklı çağırabiliriz.
*/

int toplama(int a, int b)
{
    return a + b;
}

int toplama(int a, int b, int c) 
{
    return a + b + c;
}

int main()
{
    cout << toplama(5, 7)<<endl;
    cout << toplama(3, 8, 1)<<endl;
    system("PAUSE");
}