#include <iostream>
using namespace std;
//Fonksiyon değer adres ve referans ile çağırma
void Degistir1(int a){
	a=100;
}
void Degistir2(int &a){
	a=100;
}
void Degistir3(int *p){
	*p=300;
}

void Degistir4(int *&p){
	p=NULL;
}
int main(){
	int x=200;
	Degistir1(x);
	cout<<x<<endl;
	
	Degistir2(x);
	cout<<x<<endl;
	
	int *r=&x;
	Degistir3(r);
	cout<<x<<endl;
	
	Degistir4(r);
	cout<<*r<<endl;
	
	return 0;
}