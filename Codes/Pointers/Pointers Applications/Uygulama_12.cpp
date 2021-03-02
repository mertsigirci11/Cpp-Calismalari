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
	~Sayi(){//yıkıcı fonksiyon
		cout<<"delete pdeger calisti"<<endl;
		delete pdeger;
	}
};

//Yıkıcı (destructor)Fonksiyon
int main(){
	Sayi *s1 = new Sayi(100);
	cout<<*s1;
	//delete s1;
	return 0;
}

