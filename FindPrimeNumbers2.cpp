#include <iostream>
using namespace std;

int main() {
    //Asal sayılar 2, 3, 5 ve 7'ye tam bölünemez(kendileri hariç). Bunu ele alarak asal sayıları ve adedini yazdıran koddur.
    cout << "Sayi : ";
    int sayi;
    cin >> sayi;
    int bolenadedi;
    //Asal sayı adedini 0'dan başlatıyoruz
    int asaladedi = 0;
    //Asal sayılar 2'den başladığından 2'den başlatıyoruz döngüyü
    for (int i = 2; i <= sayi; i++) {
        //Bölen adedi değişkenini 0 olarak atıyoruz ki iç döngüde bölen adedi arttırılırsa i değerini yani sayıyı bastırmasın
        //Ve her döngü başa aldığında tekrar 0 atansın ki her sayı denenirken bolenadedi değişkeni 0 olsun
        bolenadedi = 0;
        //Sayımız 2'ye, 3'e, 5'e, 7'den birisine kalansız bölünüyor mu kontrolü(bölünüyorsa aşağısındaki kodlar çalışır = asal sayı değil kontrolü)
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            //Bölünen sayılar 2, 3, 5 veya 7 değil mi kontrolü(Asal sayılar kendisine de tam bölündüğünden bu koşul ile 2,3,5,7 asal sayılarını elemiş olacağız.
            if (i != 2 && i != 3 && i != 5 && i != 7) {
                //Koşul sağlanıyorsa bölen adedini 1 arttır
                bolenadedi++;
            }
        }
        //Eğer sayımızı bölen sayı yoksa kontrolü
        if (bolenadedi == 0) {
            //Eğer bölen sayı yoksa sayıyı ekrana bastır
            cout << i << " ";
            //Eğer bölen sayı yoksa asal adedimizi 1 arttır
            asaladedi++;
        }
    }
    cout << endl;
    cout << "1 ile " << sayi << " arasi toplam " << asaladedi << " adet asal sayi var.";
    return 0;
}