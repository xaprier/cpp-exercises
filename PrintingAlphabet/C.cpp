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
        for (int c = 1; c <= sayi; c++) {
            if (c == 1 || c == sayi) {
                for (int c1 = 1; c1 <= sayi; c1++) {
                    cout << " C";
                }
            } else {
                for (int c2 = 1; c2 <= 2 * sayi; c2++) {
                    if (c2 == 1) {
                        cout << "C";
                    }
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    system("pause>0");
}
