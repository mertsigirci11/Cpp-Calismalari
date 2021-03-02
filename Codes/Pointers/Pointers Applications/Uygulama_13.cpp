#include <iostream>
using namespace std;

class Sayi{
private:
	int *pdeger;
public:
	Sayi(int dgr){
		pdeger = new int(dgr);
	}
	Sayi(){
		pdeger = new int(0);
	}
	friend ostream& operator<<(ostream& ekran,Sayi& sag){
		ekran<<*sag.pdeger<<endl;
		return ekran;
	}
	~Sayi(){
		delete pdeger;
	}
};

//Swap işlemi
int main(){
	Sayi *s1 = new Sayi(100);
	Sayi *s2 = new Sayi(200);
	cout<<*s1;
	cout<<*s2;
	
	Sayi *syedek;
	syedek=s1;
	s1=s2;
	s2=syedek;	
	
	cout<<*s1;
	cout<<*s2;
	
	return 0;
}