#include <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    cin >> sayi;
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int i = 1; i <= sayi; i++) {
            if (i == sayi || i == 1) {
                for (int i1 = 1; i1 <= sayi / 2; i1++) {
                    cout << " ";
                }
                for (int i2 = 1; i2 <= sayi; i2++) {
                    cout << "I";
                }
            } else {
                for (int i1 = 1; i1 <= sayi - 1; i1++) {
                    cout << " ";
                }
                cout << "I";
            }
            cout << endl;
        }
    }
}