#include <clocale>
#include <cmath>
#include <iostream>
using namespace std;
int faktoriyel(int a) {
    return (a <= 1 && a >= 0) ? 1 : a * faktoriyel(a - 1);
}
int main() {
    system("color a");

    long double sonuc = 0;
    double sayi1, sayi2;
    char islem;
    cout << "Sayi giriniz: ";
    cin >> sayi1;
    while (true) {
        cout << "Islemi belirtiniz. Mevcut islemler - + * / ! % =" << endl;
        cin >> islem;
        system("cls");
        if (islem == '=') {
            break;
        }
        switch (islem) {
            case '-':
                cout << "Sayi giriniz: ";
                cin >> sayi2;
                sonuc = sayi1 - sayi2;
                system("cls");
                cout << sayi1 << " - " << sayi2 << " = " << sonuc << endl;
                break;
            case '+':
                cout << "Sayi giriniz: ";
                cin >> sayi2;
                sonuc = sayi1 + sayi2;
                system("cls");
                cout << sayi1 << " + " << sayi2 << " = " << sonuc << endl;
                break;
            case '*':
                cout << "Sayi giriniz: ";
                cin >> sayi2;
                sonuc = sayi1 * sayi2;
                system("cls");
                cout << sayi1 << " * " << sayi2 << " = " << sonuc << endl;
                break;
            case '/':
                cout << "Sayi giriniz: ";
                cin >> sayi2;
                sonuc = (double)sayi1 / sayi2;
                system("cls");
                cout << sayi1 << " / " << sayi2 << " = " << sonuc << endl;
                break;
            case '!':
                sonuc = faktoriyel(sayi1);
                system("cls");
                cout << sayi1 << "! = " << sonuc << endl;
                break;
            case '%':
                cout << "Sayi giriniz: ";
                cin >> sayi2;
                sonuc = fmod(sayi1, sayi2);
                system("cls");
                cout << sayi1 << " % " << sayi2 << " = " << sonuc << endl;
                break;
            case '=':
                system("cls");
                cout << "Islem sonlandiriliyor.." << endl;
                break;
            default:
                system("cls");
                cout << "Boyle bir islem bulunamadi tekrar deneyin." << endl;
                break;
        }
        sayi1 = sonuc;
        sonuc = 0;
    }
    cout << "Son sonuc = " << sayi1;
}