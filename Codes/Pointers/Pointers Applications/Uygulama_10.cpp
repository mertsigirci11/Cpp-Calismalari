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

//Heap Bellek Bölgesi
int main(){
	
	Sayi *s1 = new Sayi(100);
	Sayi s3(50);
	
	//delete s1;	
	//Sayi *s2 = s1;
	cout<<"s1="<<s1<<endl;
	cout<<"*s1="<<*s1<<endl;
	cout<<"s3="<<s3<<endl;
	cout<<"&s3="<<&s3<<endl;
	
	delete s1;
return 0;
}



