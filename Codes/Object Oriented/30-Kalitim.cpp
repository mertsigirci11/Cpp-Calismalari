#include <iostream>
using namespace std;

class Takim
{
protected:
    string isim;
    int kurulusYili;
public:
    void takimiTanit()
    {
        cout << isim << " takimi " << kurulusYili << "' yilinda kurulmuştur." << endl;
    }
    void setIsim(string isim)
    {
        this->isim = isim;
    }
    void setKurulusYili(int yil)
    {
        this->kurulusYili = yil;
    }
    string getIsim()
    {
        return isim;
    }
    int getKurulusYili()
    {
        return kurulusYili;
    }
};

class Futbolcu:public Takim
{
private:
    string isim = "NULL";
    int yas = NULL;
    string oynadigiTakim = "NULL";
    int maas = NULL;
    Takim* t;
    
public:
    void setIsim(string isim)
    {
        this->isim = isim;
    }
    string getIsim()
    {
        return this->isim;
    }

    void setYas(int yas)
    {
        this->yas = yas;
    }
    int getYas()
    {
        return yas;
    }

    void setMaas(int maas)
    {
        this->maas = maas;
    }
    int getMaas()
    {
        return maas;
    }

    void setKulup(string takim)
    {
        oynadigiTakim = takim;
    }
    

    

};

int main()
{
    Futbolcu f1;
    Takim* t1; //t1 adinda Takim class ı pointerı oluşturduk.
    t1 = &f1; //Bu pointera oluşturduğumuz f1 örneğinin adresini verdik.  

    f1.setIsim("Mert");
    f1.setMaas(15000);

    t1->setIsim("Fenerbahce"); //t1 pointerı ile f1 örneğinin kalıtım aldığı Takım classındaki bilgileri değiştirdik.
    t1->setKurulusYili(1907);   //t1 pointerı ile f1 örneğinin kalıtım aldığı Takım classındaki bilgileri değiştirdik.
    f1.setKulup(t1->getIsim());
    f1.takimiTanit();

    cout << "---------------" << endl;

    t1->setIsim("SakaryaSpor"); //t1 pointerı ile f1 örneğinin kalıtım aldığı Takım classındaki bilgileri değiştirdik.
    t1->setKurulusYili(1965); //t1 pointerı ile f1 örneğinin kalıtım aldığı Takım classındaki bilgileri değiştirdik.
    f1.setKulup(t1->getIsim());
    f1.takimiTanit();
    
    
    
}


