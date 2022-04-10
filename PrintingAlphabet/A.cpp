#include <iostream>

using namespace std;

int main() {
    system("chcp 65001 > nul"); //VSCode ve CLion için Türkçe karakterlerin çalışması için çalıştırılan komut
    
    cout << "5 veya 5'ten büyük tek sayı giriniz: "; //Bazı harfler tek sayı olduğunda orantılı olarak çizildiğinden dolaylı tek sayı istiyoruz.
    
    int sayi; //Harfimizin büyüklüğü için sayı değişkenini kullanıcıdan alıyoruz
    cin >> sayi;
    
    if (sayi <= 4 || sayi % 2 == 0) { //Girilen sayı verdiğimiz koşulları sağlıyor mu kontrolü
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int a = 1; a <= sayi; a++) { //Her satır için for döngüsü. Yani a değişkenimiz satır numarasını ifade ediyor.
            if (a == 1) { //Satırımız 1 ise
                cout << " "; //1 boşluk bırak
                for (int a1 = 1; a1 <= 2 * sayi - 2; a1++) { //2*sayi-2 tane yan yana A bastırsın. if koşulu gerçekleştiğinden diğer koşullara bakılmadan 34.satıra geçilir ve döngü bir sonraki aşamaya geçer
                    cout << "A";
                }
            } else if (a == (sayi / 2) + 1) { //Satırımız tam orta satır ise.
                for (int a2 = 1; a2 <= 2 * sayi; a2++) { //2*sayi tane yan yana A bastırsın. else if koşulu gerçekleştiğinden diğer koşullara bakılmadan 34.satıra geçilir ve döngü bir sonraki aşamaya geçer
                    cout << "A";
                }
            } else { //Yukardaki koşullar sağlanmıyor ise.
                for (int a3 = 1; a3 <= 2 * sayi - 1; a3++) { //1'den, 2*sayi - 1'e kadar sütun döngüsü
                    if (a3 == 1 || a3 == 2 * sayi - 1) { //eğer sütun "1" veya "2*sayi-1" sütunu ise A bas, değilse 1 boşluk bas.
                        cout << "A";
                    }
                    cout << " ";
                }
            }
            cout << endl; //satırı bitir
        }
    }
    system("pause>0");
}
