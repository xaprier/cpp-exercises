#include <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "5 veya 5'ten büyük tek sayı giriniz: ";
    cin >> sayi;
    if (sayi <= 4 || sayi % 2 == 0) {
        cout << "Girilen sayı 5 veya 5'ten büyük tek sayı olmalıdır.";
    } else {
        for (int s = 1; s <= sayi; s++) {
            if (s == 1 || s == sayi / 2 + 1) {
                for (int s1 = 1; s1 <= sayi; s1++) {
                    cout << " S";
                }
            } else if (s == sayi) {
                for (int s2 = 1; s2 <= sayi; s2++) {
                    cout << "S ";
                }
            } else if (s <= sayi / 2) {
                cout << "S";
            } else {
                for (int s3 = 1; s3 <= 2 * sayi - 1; s3++) {
                    cout << " ";
                }
                cout << "S";
            }
            cout << endl;
        }
    }
}