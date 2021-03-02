#include <iostream>
using namespace std;

class Sayi{
private:
	int deger;
public:
	Sayi(int dgr){
		deger = dgr;
	}
	Sayi(){
	deger=0;
	}
	friend ostream& operator<<(ostream& ekran,Sayi& sag){
	ekran<<sag.deger<<endl;
	return ekran;
	}
	
};
//Sallanan Gösterici (dangling pointer)
int main(){
	Sayi *s1 = new Sayi(100);
	Sayi *s2 = s1;//s1 ve s2 aynı nesneyi gösteriyor
	cout<<*s2; 
	cout<<"s2="<<s2<<endl;
	delete s1;
	
	//Sayi *s3 = new Sayi(500);
	for (int i=0;i<100;i++){
		Sayi *p = new Sayi(500);
		cout<<"p="<<p<<endl;
	}
	
	cout<<*s2; //s1'in de işaret ettiği nesne silindiği için s1 boşta kaldı (dangling pointer)
	
	return 0;

}

