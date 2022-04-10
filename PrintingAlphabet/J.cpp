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
        for (int j = 1; j <= sayi; j++) {
            if (j == sayi) {
                for (int j1 = 1; j1 <= sayi - 2; j1++) {
                    cout << " J";
                }
            } else if (j == sayi - 1) {
                cout << "J";
                for (int j2 = 1; j2 <= 2 * sayi - 4; j2++) {
                    cout << " ";
                }
                cout << "J";
            } else if (j == sayi - 2) {
                cout << "J";
                for (int j3 = 1; j3 <= 2 * sayi - 2; j3++) {
                    cout << " ";
                }
                cout << "J";
            } else {
                for (int j4 = 1; j4 <= 2 * sayi; j4++) {
                    if (j4 == 2 * sayi) {
                        cout << "J";
                    }
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    system("pause>0");
}