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
        for (int f = 1; f <= sayi; f++) {
            if (f == 1 || f == (sayi / 2) + 1) {
                for (int f1 = 1; f1 <= sayi; f1++) {
                    cout << "F ";
                }
            } else {
                for (int f2 = 1; f2 <= 2 * sayi - 1; f2++) {
                    if (f2 == 1) {
                        cout << "F";
                    }
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    system("pause>0");
}