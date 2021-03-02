/*****************************************************************************************************************************************************
**					                                            SAKARYA ÜNİVERSİTESİ                                                                **
**				                                     BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ                                                      **
**				                                           BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ                                                           **
**				                                                 PROGRAMLAMAYA GİRİŞ DERSİ                                                          **
**					                                           2019-2020 YAZ DÖNEMİ                                                                 **
**	                                                                                                                                                **
**				                                            ÖDEV NUMARASI..........: 1                                                              **
**				                                            ÖĞRENCİ ADI............: MERT SIĞIRCI                                                   **
**				                                            ÖĞRENCİ NUMARASI.......: B191210078                                                     **
**                                                          DERSİN ALINDIĞI GRUP...: 1/A                                                            **
*****************************************************************************************************************************************************/




#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Malzeme.h"
#include "MalzemeListesi.h"
#include "Proje.h"
#include "ProjeListesi.h"
#include<sstream>

void yazdir(string dizi[],fstream& dosya) { // Hakediş dosyasına bilgileri yazdırmak için oluşturulmuştur.
    for (int i = 0; i < 100;i++) {
        if (dizi[i] != "\0") {
            dosya << dizi[i] << "-";
        }
    }
}
int main()
{
    MalzemeListesi m;
    ProjeListesi p;
    
    

    int menuSecim;
    cout << "Insaat otomasyonuna hosgeldiniz.";

    while (true) //Bu sonsuz döbü sayesinde kullanıcı istediği kadar işlem yapabilir.
    {
        
        do //Burası ana menüdür. Gerekli işlemler için seçim yapılır.
        {
            cout << "\n\nNe yapmak istiyorsunuz?\n\n";
            cout << "Malzemeler uzerinde islem yapmak icin 1'e basiniz.\n";
            cout << "Projeler uzerinde islem yapmak icin 2'ye basiniz.\n";
            cout << "Hakedis eklemek icin 3'e basiniz.\n";
            cout << "Cikis yapmak icin 4'e basiniz.\n";
            

            cin >> menuSecim;

        } while (menuSecim != 1 && menuSecim != 2 && menuSecim != 3 && menuSecim != 4);//Kullanıcı yanlış bir tuşa basarsa menü tekrar eder.

        if (menuSecim == 1) //Malzeme işlemlerini başlatan menüdür.
        {
            cout << "Malzeme islemleri baslatiliyor..." << endl << endl;

            int malzemeSecim;

            do  //Malzeme işlemleri için kullanıcıya seçim yaptırır.
            {
                cout << "Urun eklemek icin 1'e basiniz.\n";
                cout << "Urun silmek icin 2'ye basiniz.\n";
                cout << "Urun aramak icin 3'e basiniz.\n";
                cout << "Urunleri raporlamak icin 4'e basiniz.\n";
                cout << "Geri gelmek icin 5'e basiniz.\n";

                cin >> malzemeSecim;

            } while (malzemeSecim != 1 && malzemeSecim != 2 && malzemeSecim != 3 && malzemeSecim != 4 && malzemeSecim != 5);

            if (malzemeSecim == 1)
            {                
                m.MalzemeEkle();  //Fonksiyon açıklamasını ilgili sınıfta yaptım. 
            }

            else if (malzemeSecim==2)
            {
                string numara;
                cout << "Silmek istediginiz malzemenin numarasini giriniz: ";
                cin >> numara;
                m.MalzemeSil(numara);//Fonksiyon açıklamasını ilgili sınıfta yaptım. 
                cout << numara << "numarali malzeme silinmistir.";                
            }

            else if (malzemeSecim==3)
            {               
                    system("cls");
                    string numara;
                    cout << "Aradiginiz urunun numarasini giriniz: ";
                    cin >> numara;
                    
                    m.MalzemeAraNumara(numara);//Fonksiyon açıklamasını ilgili sınıfta yaptım.
            }

            else if (malzemeSecim == 4)
            {
                m.MalzemeRaporlama();
            }
            else if (malzemeSecim == 5)
            {
                system("cls");
                continue; //Burada bir üst menüye dönüş yapılır.
            }
        }

        if (menuSecim == 2) //Proje işlemlerini başlatan bölüm menüdür.
        {
            cout << "Proje islemleri baslatiliyor..." << endl << endl;
            
            int projeSecim;

            do  //Proje işlemleri için kullanıcıya seçim yaptırır.
            {
                cout << "Proje eklemek icin 1'e basiniz.\n";
                cout << "Proje silmek icin 2'ye basiniz.\n";
                cout << "Proje aramak icin 3'e basiniz.\n";
                cout << "Proje raporlamak icin 4'e basiniz.\n";
                cout << "Geri gelmek icin 5'e basiniz.\n";

                cin >> projeSecim;

            } while (projeSecim!=1&& projeSecim != 2 && projeSecim != 3 && projeSecim != 4  && projeSecim != 5);

            if (projeSecim == 1 )
            {                
                p.ProjeEkle(); // Fonksiyon açıklamasını ilgili sınıfta yaptım.
            }

            else if (projeSecim == 2 )
            {
                string numara;
                cout << "Silmek istediginiz projenin numarasini giriniz: ";
                cin >> numara;
                p.ProjeSil(numara); // Fonksiyon açıklamasını ilgili sınıfta yaptım.
                cout << numara << " numaralı proje silindi." << endl;
                
            }

            else if (projeSecim == 3 )
            {                                
                    system("cls");
                    string no;
                    cout << "Aradiginiz projenin numarasini giriniz: ";
                    cin >> no;

                    p.ProjeAraNumara(no);   // Fonksiyon açıklamasını ilgili sınıfta yaptım.               
            }

            else if (projeSecim == 4)
            {
                p.ProjeRaporla();
            }

            else if (projeSecim == 5)
            {
                system("cls");
                continue; //Bir üst menüye dönüş yapılır.
            }
        }

        if (menuSecim == 3) //Hakediş ekleme işlemini başlatır
        {
            fstream dosyaOku1,dosyaOku2,dosyaOku3; //3 farklı dosyadan okuma ve yazma yapmak için dosya yolu oluşturduk.
            dosyaOku1.open("Hakedisler.txt",ios::app|ios::out);
            dosyaOku2.open("ProjeListesi.txt",ios::in);
            dosyaOku3.open("MalzemeListesi.txt",ios::in);

            string numara, ay, urunNolari, urunSayilari[100], urunFiyatlari[100]; // Hakediş dosyasının değişkenlerini oluşturduk
            string projeNo, projeAdi,projeYurutucuFirma,projeSorumlusu,projeKontroloru;//Okuma ve karşılaştırma yapmak için proje dosyası değişkenlerini oluşturduk.
            string urun_no[100], urun_isim, urun_birim, urun_fiyat[100], urun_marka;//Okuma ve karşılaştırma yapmak için malzeme dosyası değişkenlerini oluşturduk.
            string fiyatlar[100];//Fiyatları tutmak için string dizisi oluşturduk.
            
            cout << "Hakedis numarasi giriniz: ";
            cin >> numara;
            

            bool kontrol = true; //Girilen hakediş numarası proje numaralarından biriyle aynı mı diye kontrol anahtarı oluşturduk.

            while (dosyaOku2 >> projeNo >> projeAdi >> projeYurutucuFirma >> projeSorumlusu >> projeKontroloru)
            {
                
                if (projeNo == numara)//Eğer ki eşit ise hakediş eklenebilecek
                {
                    kontrol = true;
                    break;
                    
                }
                else {   //Eşit değilse hakediş eklenemeyecek.
                    kontrol = false;
            
                }

            }
            if (!kontrol) {   //Eşit olmadığı için kullanıcıya geri bildirim gönderildi.
                cout << "Ayni numaraya sahip proje yok baska numara deneyin." << endl;
            }
            if (kontrol) //Eşit olduğu için hakediş bilgileri alınmaya devam edildi.
            {
                cout << "Hakedis kac aylik olsun: ";
                cin >> ay;

                int k = 0; //urun_no dizisini indekslemek için oluşturduk.
                
                while (dosyaOku3 >> urun_no[k] >> urun_isim >> urun_birim >> urun_fiyat[k] >> urun_marka)
                {
                    cout << "Urun no : "<<urun_no[k] <<" / "<<"Urun ismi : "<< urun_isim << " / " <<"Urun birimi : "<< urun_birim << " / "
                       <<"Fiyat : " << urun_fiyat[k] <<" / "<<"Marka : " << urun_marka << endl;
                    k++;
                    

                    //Bu döngünde kullanıcı hakedişe ekleme yapması için tüm ürün bilgilerini konsola yazdırır.
                }

                int cesitSayisi; 
                //Kullanıcıya kaç çeşit ürün eklemek istiyorsa input alınır sonraki aşamada döngüye sokularak o kadar kullanıcıdan bilgi ister.
                cout << "Kac cesit urun eklemek istiyorsunuz: ";
                cin >> cesitSayisi;

                int i = 0;
                int j = 0;
                string numaralar[100]; //Bu diziyi hakediş dosyasına kullanılan ürünlerin numaralarını yazmak için oluşturduk.
                while (i<cesitSayisi)//Kullanıcının girdiği çeşit sayısı kadar döngü devam edip bilgileri alır.
                {   
                    bool kontrol=true;
                    cout << "Hangi urunu eklemek istiyorsunuz numarasini girin: ";
                    cin >> numaralar[j];

                    for (int i = 0;  i <100;i++) {  //Kullanıcı, olmayan yani hatalı bir ürün numarası girerse onun kontrolü yapılacak.
                        if (urun_no[i] == numaralar[j]) {
                            kontrol = true;
                            break;
                        }
                        else {
                            kontrol = false;
                        }
                    }
                    if (!kontrol)//Kullanılmayan ürünün numarsı girilirse hata alacak ve yeniden numara girmesi istenecek(Döngüde)
                    { 
                        cout << "Aradiginiz urun mevcut degil..." << endl;
                        continue;
                    }
                        

                    cout << numaralar[j] << " numarali malzemeden kac tane eklemek istiyorsunuz: ";
                    cin >> urunSayilari[j];
                    //Seçilen ürün sayısından kaç tane istediğini kullanıcıdan alıyoruz(Fiyat hesaplamak için) 

                    int urunSayilari1[100], urunFiyatlari1[100],urunToplam[100];

                    /*Aşağıda, sınıflarda string olarak tanımlanan değişkenleri fiyat hesağlayabilmek için
                    int e dönüştürdük.*/
                    
                    
                    
                    
                    stringstream  donustur2(urunSayilari[j]), donustur3(urun_fiyat[j]);
                    donustur2 >> urunSayilari1[j];
                    donustur3 >> urunFiyatlari1[j];

                    urunToplam[j] = urunFiyatlari1[j] * urunSayilari1[j];
                  
                    fiyatlar[j] = to_string(urunToplam[j]);
                    i++;
                    j++;
                }
                
                //Aşağıdaki kısımda kullanıcıdan alınan veriler üzerine hakedis txt sine yazdırılır.
               
                dosyaOku1 << numara << setw(25) << ay << setw(25);
                yazdir(numaralar, dosyaOku1);
                dosyaOku1 << setw(25);
                yazdir(urunSayilari, dosyaOku1);
                dosyaOku1 << setw(25);
                yazdir(fiyatlar, dosyaOku1);
                dosyaOku1 << endl;
            }
            
            kontrol = true;

            dosyaOku2.close();
            dosyaOku3.close();
        }

        if (menuSecim == 4)
        {
            system("cls");
            cout << "\n\n\nProgramdan cikis yapiliyor...\n\n\n\n";

            exit(0);
        }

        






    }
}


