#include <iostream>

using namespace std;

int main() {
    system("chcp 65001 > nul");
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    int sayi;
    cin >> sayi;
    int bosluk1 = 2 * sayi - 2;
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int k = 1; k <= sayi; k++) {
            if (k <= sayi / 2) {
                cout << "K";
                for (int k1 = 1; k1 <= bosluk1; k1++) {
                    cout << " ";
                }
                cout << "K";
                bosluk1 -= 3;
            } else if (k == sayi / 2 + 1) {
                for (int k2 = 1; k2 <= bosluk1; k2++) {
                    cout << "K ";
                }
                bosluk1 += 3;
            } else {
                cout << "K";
                for (int k3 = 1; k3 <= bosluk1; k3++) {
                    cout << " ";
                }
                cout << "K";
                bosluk1 += 3;
            }
            cout << endl;
        }
    }
    system("pause>0");
}