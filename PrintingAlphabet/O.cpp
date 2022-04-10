#include <iostream>

using namespace std;

int main() {
    system("chcp 65001 > nul");
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    int sayi;
    cin >> sayi;
    int bosluk1 = sayi - 4;
    int bosluk2 = 2 * (sayi - bosluk1) - 2;
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int o = 1; o <= sayi; o++) {
            if (o == 1) {
                cout << "  ";
                for (int o1 = 1; o1 < 2*sayi-4; o1++) {
                    cout << "O";
                }
            } else if (o == 2) {
                cout << " O";
                for (int o2 = 1; o2 <= 2*sayi-4; o2++) {
                    cout << " ";
                }
            } else if (o == sayi) {
                cout << "  ";
                for (int o1 = 1; o1 < 2*sayi-4; o1++) {
                    cout << "O";
                }
            } else if (o == sayi-1) {
                cout << " O";
                for (int o2 = 1; o2 <= 2*sayi-4; o2++) {
                    cout << " ";
                }
            } else {
                cout << "O";
                for (int o2 = 1; o2 <= 2*sayi-2; o2++) {
                    cout << " ";
                }
            }
            cout << "O" << endl;
        } 
    }
    system("pause>0");
}