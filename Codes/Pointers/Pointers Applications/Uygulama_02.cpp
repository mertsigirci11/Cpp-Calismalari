#include <iostream>
using namespace std;
//Pointer Tanımlama
int main(){
	int a=10000;
	int *p;//pointer
	p=&a;

	cout<<"a="<<a<<endl;
	cout<<"&a="<<&a<<endl;
	cout<<"p="<<p<<endl;
	cout<<"*p="<<*p<<endl;
	cout<<"&p="<<&p<<endl;
	
	return 0;
}
