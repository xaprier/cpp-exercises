#include <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "5 veya 5'ten küçük tek sayı giriniz: ";
    cin >> sayi;
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int t = 1; t <= sayi; t++) {
            if (t == 1) {
                for (int t1 = 1; t1 <= sayi; t1++) {
                    cout << "T ";
                }
            } else {
                for (int t2 = 1; t2 <= sayi - 1; t2++) {
                    cout << " ";
                }
                cout << "T";
            }
            cout << endl;
        }
    }
}