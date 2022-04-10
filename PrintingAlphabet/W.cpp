#include <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    cin >> sayi;
    int bosluk1 = sayi - 2;
    int arabosluk = 0;
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girdiğiniz sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int w = 1; w <= sayi; w++) {
            if (w == sayi) {
                cout << "W";
                for (int w4 = 1; w4 <= 2 * sayi - 2; w4++) {
                    cout << " ";
                }
                cout << "W" << endl;
            } else {
                cout << "W";
                for (int w1 = 1; w1 <= bosluk1; w1++) {
                    cout << " ";
                }
                cout << "W";
                for (int w2 = 1; w2 <= arabosluk; w2++) {
                    cout << " ";
                }
                cout << "W";
                for (int w3 = 1; w3 <= bosluk1; w3++) {
                    cout << " ";
                }
                cout << "W" << endl;
                arabosluk += 2;
                bosluk1--;
            }
        }
    }
}