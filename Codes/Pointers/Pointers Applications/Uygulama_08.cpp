#include <iostream>
using namespace std;
int main(){
	int a=50;
	int *p;
	p=&a;
	
	int **pp;
    pp=&p;
		
	cout<<"pp nin adres: "<<&pp<<endl;
	cout<<"pp nin degeri: "<<pp<<endl;
	cout<<"pp nin gosterdigi: "<<*pp<<endl;
	cout<<"**pp: "<<**pp<<endl;
	cout<<"p nin adres: "<<&p<<endl;
	cout<<"p nin degeri: "<<p<<endl;
	cout<<"p nin gosterdigi: "<<*p<<endl;
	cout<<"a nin adres: "<<&a<<endl;
	cout<<"a nin degeri: "<<a<<endl;
	return 0;
}