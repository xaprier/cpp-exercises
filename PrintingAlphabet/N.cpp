#include <iostream>
using namespace std;

int main() {
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    int sayi;
    cin >> sayi;
    int bosluk1 = 0;
    int bosluk2 = (sayi - bosluk1 + 4);
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int n = 1; n <= sayi; n++) {
            cout << "N";
            for (int n1 = 1; n1 <= bosluk1; n1++) {
                cout << " ";
            }
            cout << "N";
            for (int n2 = 1; n2 <= bosluk2; n2++) {
                cout << " ";
            }
            bosluk1+=2;
            bosluk2 = (sayi - bosluk1 + 4);
            if (n == sayi) {
                cout << endl;
                continue;
            } 
            cout << "N" << endl;
        }
    }
}