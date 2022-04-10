#include <iostream>

using namespace std;

int main() {
    system("chcp 65001 > nul");
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    int sayi;
    cin >> sayi;
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int u = 1; u <= sayi; u++) {
            if (u == sayi) {
                cout << " ";
                for (int u1 = 1; u1 <= 2 * sayi - 2; u1++) {
                    cout << "U";
                }
            } else {
                for (int u2 = 1; u2 <= 2 * sayi - 1; u2++) {
                    if (u2 == 1 || u2 == 2 * sayi - 1) {
                        cout << "U";
                    }
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    system("pause>0");
}