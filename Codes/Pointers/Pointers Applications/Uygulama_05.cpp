#include <iostream>
using namespace std;
int main(){
	int a=10;
	int *p,*r;
	p=&a;
	r=p;
	*r=50;//a=50
	cout<<a<<endl;
	return 0;
}