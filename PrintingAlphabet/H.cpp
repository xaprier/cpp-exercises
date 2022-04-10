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
        for (int h = 1; h <= sayi; h++) {
            if (h == (sayi / 2) + 1) {
                for (int h1 = 1; h1 <= 2 * sayi; h1++) {
                    cout << "H";
                }
            } else {
                for (int h2 = 1; h2 <= 2 * sayi - 1; h2++) {
                    if (h2 == 1 || h2 == 2 * sayi - 1) {
                        cout << "H";
                    }
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    system("pause>0");
}