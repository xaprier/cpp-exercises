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
        for (int l = 1; l <= sayi; l++) {
            if (l == sayi) {
                for (int l1 = 1; l1 <= sayi; l1++) {
                    cout << "L ";
                }
            } else {
                for (int l2 = 1; l2 <= 2 * sayi; l2++) {
                    if (l2 == 1) {
                        cout << "L";
                    }
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    system("pause>0");
}