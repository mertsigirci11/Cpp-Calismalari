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

int main(){
	//Sayi *s1,*s2,s3;
	Sayi *s1;
	Sayi *s2;//=new Sayi(10);	
	Sayi s3(10);
	
	// Kac adet nesne var?
	
	s1 = &s3;
	s2 = &s3;
	
	cout<<s1<<endl;
	cout<<*s1<<endl;
	cout<<*s2<<endl;
	cout<<s3<<endl;
	cout<<&s3<<endl;
	
	return 0;
}