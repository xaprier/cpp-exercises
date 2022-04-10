#include <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    cin >> sayi;
    int bosluk1 = 2 * sayi - 4;
    if (sayi % 2 == 0 || sayi <= 4) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int z = 1; z <= sayi; z++) {
            if (z == 1 || z == sayi) {
                for (int z1 = 1; z1 <= sayi; z1++) {
                    cout << "Z ";
                }
            } else {
                for (int z2 = 1; z2 <= bosluk1; z2++) {
                    cout << " ";
                }
                cout << "Z";
                bosluk1 -= 2;
            }
            cout << endl;
        }
    }
}