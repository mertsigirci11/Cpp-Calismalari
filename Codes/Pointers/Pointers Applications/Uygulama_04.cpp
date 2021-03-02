#include <iostream>
using namespace std;
int main(){
	int a=10;//&a=0x61ff1c [a=10]
	int *p; 
	p=&a;// &p=0x61ff18[p=0x61ff1c]
	a++;	
	cout<<"&a="<<&a<<endl;
	cout<<"&p="<<&p<<endl;
	cout<<"p="<<p<<endl;
	cout<<"*p="<<*p<<endl; //0x61ff1c [a=11]
	return 0;
}