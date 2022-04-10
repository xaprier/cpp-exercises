#include <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    cin >> sayi;
    int ekbosluk = 0;
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int r = 1; r <= sayi; r++) {
            if (r == 1 || r == (sayi / 2) + 1) {
                for (int r1 = 1; r1 <= sayi; r1++) {
                    cout << "R ";
                }
            } else if (r <= sayi / 2) {
                cout << "R";
                for (int r2 = 1; r2 <= 2 * sayi - 2; r2++) {
                    cout << " ";
                }
                cout << "R";
            } else {
                cout << "R";
                for (int r3 = 1; r3 <= sayi - 2 + ekbosluk; r3++) {
                    cout << " ";
                }
                cout << "R";
                ekbosluk += 2;
            }
            cout << endl;
        }
    }
}