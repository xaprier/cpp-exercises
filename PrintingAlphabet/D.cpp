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
        for (int d = 1; d <= sayi; d++) {
            if (d == 1 || d == sayi) {
                for (int d = 1; d <= sayi; d++) {
                    cout << "D ";
                }
            } else {
                for (int d1 = 1; d1 <= 2 * sayi - 1; d1++) {
                    if (d1 == 1 || d1 == 2 * sayi - 1) {
                        cout << "D";
                    }
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    system("pause>0");
}
