
// basit hesap makinesi yazınız.switch case kullanarak.bu hesap makinesinde toplama, çıkarma, çarpma, bölme, faktöriyel, üslü sayı hesaplama olsun.
// üslü sayı ve faktöriyel hesabını fonksiyon kullanarak yapınız.bu işlemi yaparken dizileri pointer aritmetiği kullanarak yapılan bütün işlemleri ve sayıları hafızada tutunuz.
// = girildiğinde ise bütün bu işlem ve sayıları ve sonucu alt alta bastıran kodu yazınız.
#include <cmath>
#include <iostream>
using namespace std;

int usal(long double sayi, long double sayi2) {
    int sonuc = 1;
    for (int i = 0; i < sayi2; i++) {
        sonuc *= sayi;
    }
    return sonuc;
}

int faktoriyel(int sayi) {
    if (sayi < 0)
        return 0;
    else if (sayi == 0)
        return 0;
    else
        return (sayi > 1) ? sayi * faktoriyel(sayi - 1) : 1;
}
int main() {
    long double sayi1[1000], sayi2[1000], sonuc[1000];
    char islem[1000];
    int islemadedi = 0;
    cout << "Sayı giriniz: ";
    cin >> *(sayi1 + islemadedi);
    while (true) {
        cout << "İşlemi belirtiniz( + - / * ^ ! % ): ";
        cin >> *(islem + islemadedi);
        if (*(islem + islemadedi) == '=') {
            for (int i = 0; i < islemadedi; i++) {
                if (*(islem + i) == '!') {
                    cout << "Sonuç " << i + 1 << " -> " << *(sayi1 + i) << *(islem + i) << "=" << *(sonuc + i) << endl;
                } else {
                    cout << "Sonuç " << i + 1 << " -> " << *(sayi1 + i) << *(islem + i) << *(sayi2 + i) << "=" << *(sonuc + i) << endl;
                }
            }
            break;
        }
        switch (*(islem + islemadedi)) {
            case '+':
                cout << "toplanacak sayıyı giriniz: ";
                cin >> *(sayi2 + islemadedi);
                *(sonuc + islemadedi) = *(sayi1 + islemadedi) + *(sayi2 + islemadedi);
                islemadedi++;
                *(sayi1 + islemadedi) = *(sonuc + islemadedi - 1);
                break;
            case '-':
                cout << "çıkarılacak sayıyı giriniz: ";
                cin >> *(sayi2 + islemadedi);
                *(sonuc + islemadedi) = *(sayi1 + islemadedi) - *(sayi2 + islemadedi);
                islemadedi++;
                *(sayi1 + islemadedi) = *(sonuc + islemadedi - 1);
                break;
            case '/':
                cout << "bölünecek sayıyı giriniz: ";
                cin >> *(sayi2 + islemadedi);
                *(sonuc + islemadedi) = *(sayi1 + islemadedi) / *(sayi2 + islemadedi);
                islemadedi++;
                *(sayi1 + islemadedi) = *(sonuc + islemadedi - 1);
                break;
            case '*':
                cout << "çarpılacak sayıyı giriniz: ";
                cin >> *(sayi2 + islemadedi);
                *(sonuc + islemadedi) = *(sayi1 + islemadedi) * *(sayi2 + islemadedi);
                islemadedi++;
                *(sayi1 + islemadedi) = *(sonuc + islemadedi - 1);
                break;
            case '^':
                cout << "üssü giriniz: ";
                cin >> *(sayi2 + islemadedi);
                *(sonuc + islemadedi) = usal(*(sayi1 + islemadedi), *(sayi2 + islemadedi));
                islemadedi++;
                *(sayi1 + islemadedi) = *(sonuc + islemadedi - 1);
                break;
            case '!':
                *(sonuc + islemadedi) = faktoriyel(*(sayi1 + islemadedi));
                islemadedi++;
                *(sayi1 + islemadedi) = *(sonuc + islemadedi - 1);
                break;
            case '%':
                cout << "modu giriniz: ";
                cin >> *(sayi2 + islemadedi);
                *(sonuc + islemadedi) = fmod(*(sayi1 + islemadedi), *(sayi2 + islemadedi));
                islemadedi++;
                *(sayi1 + islemadedi) = *(sonuc + islemadedi - 1);
                break;
            default:
                cout << "geçersiz işlem";
                break;
        }
    }
}