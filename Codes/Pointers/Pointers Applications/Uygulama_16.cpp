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
	delete pdeger; //yıkıcı fonksiyon çağrıldı
}
};
class Kisi{
public: //private
	string isim;
	Sayi *yas;
public:
	Kisi(string isim,int ys){
		this->isim = isim;
		yas = new Sayi(ys);
	}
~Kisi(){
	delete yas;
}
friend ostream& operator<<(ostream& ekran,Kisi& sag){
	ekran<<sag.isim<<" "<<*sag.yas<<endl;
return ekran;
}
};

int main(){
	Kisi *ahmet = new Kisi("Ahmet",35);
	Kisi *mehmet = new Kisi("Mehmet",55);
	
	
	cout<<*ahmet;
	cout<<*mehmet;
	Sayi *yasYedek = ahmet->yas;
	ahmet->yas = mehmet->yas;
	mehmet->yas = yasYedek;
	cout<<*ahmet;
	cout<<*mehmet;
	
	delete ahmet;
	delete mehmet;
return 0;
}