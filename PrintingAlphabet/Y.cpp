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
        for (int y = 1; y <= sayi; y++) {
            if (y < sayi / 2) {
                for (int y1 = 1; y1 <= 2 * sayi - 1; y1++) {
                    if (y1 == 1 || y1 == 2 * sayi - 1) {
                        cout << "Y";
                    }
                    cout << " ";
                }
                cout << endl;
            } else if (y == sayi / 2) {
                for (int y2 = 1; y2 <= sayi; y2++) {
                    if (y2 == (sayi / 2) + 1) {
                        cout << "   ";
                        continue;
                    }
                    cout << "Y ";
                }
                cout << endl;
            } else {
                for (int y3 = 1; y3 <= 2 * sayi; y3++) {
                    if (y3 == sayi) {
                        cout << "YY";
                    }
                    cout << " ";
                }
                cout << endl;
            }
        }
    }
    system("pause>0");
}