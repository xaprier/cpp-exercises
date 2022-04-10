#include <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "5 veya 5'ten küçük tek sayı giriniz: ";
    cin >> sayi;
    int bosluk1 = 0;
    int arabosluk = 2 * (sayi - bosluk1 - 1);
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int v = 1; v <= sayi; v++) {
            for (int v1 = 1; v1 <= bosluk1; v1++) {
                cout << " ";
            }
            cout << "V";
            for (int v2 = 1; v2 <= arabosluk; v2++) {
                cout << " ";
            }
            cout << "V" << endl;
            bosluk1++;
            arabosluk = 2 * (sayi - bosluk1 - 1);
        }
    }
}