#include <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    cin >> sayi;
    int bosluk1 = 0;
    int bosluk2 = 2 * sayi - 2 - 2 * bosluk1;
    if (sayi % 2 == 0 || sayi <= 4) {
        cout << "Girdiğiniz sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int x = 1; x <= sayi; x++) {
            if (x <= sayi / 2) {
                for (int x1 = 1; x1 <= bosluk1; x1++) {
                    cout << " ";
                }
                cout << "X";
                for (int x2 = 1; x2 <= bosluk2; x2++) {
                    cout << " ";
                }
                cout << "X";
                bosluk1 += 2;
                bosluk2 = 2 * sayi - 2 - 2 * bosluk1;
            } else if (x == sayi / 2 + 1) {
                for (int x3 = 1; x3 <= bosluk1; x3++) {
                    cout << " ";
                }
                cout << "XX";
                bosluk1 -= 2;
                bosluk2 = 2 * sayi - 2 - 2 * bosluk1;
            } else {
                for (int x4 = 1; x4 <= bosluk1; x4++) {
                    cout << " ";
                }
                cout << "X";
                for (int x5 = 1; x5 <= bosluk2; x5++) {
                    cout << " ";
                }
                cout << "X";
                bosluk1 -= 2;
                bosluk2 = 2 * sayi - 2 - 2 * bosluk1;
            }
            cout << endl;
        }
    }
}