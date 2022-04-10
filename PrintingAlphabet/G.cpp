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
        for (int g = 1; g <= sayi; g++) {
            if (g == 1 || g == sayi) {
                for (int g1 = 1; g1 <= sayi; g1++) {
                    cout << " G";
                }
                cout << endl;
            } else if (g == (sayi / 2)) {
                for (int g2 = 1; g2 < sayi - 1; g2++) {
                    cout << "G";
                    if (g2 == sayi / 2) {
                        for (int g3 = 1; g3 <= sayi - 1; g3++) {
                            if (g3 == 1) {
                                cout << "  ";
                                continue;
                            } else {
                                cout << " G";
                            }
                        }
                    } else if (g2 > sayi / 2) {
                        for (int g4 = 1; g4 <= 2 * sayi - 2; g4++) {
                            cout << " ";
                        }
                        cout << "G";
                    }
                    cout << endl;
                }
            }
        }
    }
    system("pause>0");
}