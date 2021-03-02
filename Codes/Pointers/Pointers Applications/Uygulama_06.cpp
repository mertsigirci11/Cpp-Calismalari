#include <iostream>
using namespace std;
int main(){
	int a=10;
	int *p,*r;
	p=&a;
	r=p;
	a=100;
	cout<<*r<<endl;
	cout<<*p<<endl;
	return 0;
}