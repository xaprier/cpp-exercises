#include <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    cin >> sayi;
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int p = 1; p <= sayi; p++) {
            if (p == 1) {
                cout << "P";
                for (int p3 = 1; p3 <= sayi-1; p3++) {
                    cout << " P";
                }
            }
            else if (p <= sayi/2) {
                cout << "P";
                for (int p2 = 1; p2 <= 2*sayi-2; p2++) {
                    cout << " ";
                }
                cout << "P";
            } else if (p == sayi/2+1) {
                cout << "P";
                for (int p3 = 1; p3 <= sayi-1; p3++) {
                    cout << " P";
                }
            } else {
                cout << "P";
            }
            cout << endl;
        }
    }
}