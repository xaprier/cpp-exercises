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
        for (int e = 1; e <= sayi; e++) {
            if (e == 1 || e == sayi || e == (sayi / 2) + 1) {
                for (int e1 = 1; e1 <= sayi; e1++) {
                    cout << "E ";
                }
            } else {
                for (int e2 = 1; e2 <= 2 * sayi - 1; e2++) {
                    if (e2 == 1) {
                        cout << "E";
                    }
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    system("pause>0");
}