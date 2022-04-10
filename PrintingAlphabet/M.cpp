#include <iostream>

using namespace std;

int main() {
    cout << "5 veya 5'ten daha büyük tek sayı giriniz: ";
    int sayi;
    cin >> sayi;
    int bosluk1 = 0;
    int arabosluk = 2 * (sayi - bosluk1 - 2);
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int m = 1; m <= sayi; m++) {
            cout << "M";
            if (m == 1) {
                for (int m1 = 1; m1 <= 2 * sayi - 2; m1++) {
                    cout << " ";
                }
            } else {
                for (int m2 = 1; m2 <= bosluk1; m2++) {
                    cout << " ";
                }
                cout << "M";
                for (int m3 = 1; m3 <= arabosluk; m3++) {
                    cout << " ";
                }
                cout << "M";
                for (int m4 = 1; m4 <= bosluk1; m4++) {
                    cout << " ";
                }
                bosluk1++;
                arabosluk = 2 * (sayi - bosluk1 - 2);
            }

            cout << "M" << endl;
        }
    }
}