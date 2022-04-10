#include <iostream>

using namespace std;

int main() {
    
    cout << "Karenin kenar uzunluğunu girin: ";
    int sayi;
    cin >> sayi;
    string alan = to_string(sayi*sayi);
    if (sayi <= 4) {
        cout << "Girdiğiniz değer en az 5 olmalı";
    } else if (sayi % 2 == 0) { 
        cout << "Girdiğiniz değer tek sayı olmalı";
    } else {
        for (int i = 1; i <= sayi; i++) {
            if (i == 1 || i == sayi) {
                for (int i = 1; i <= sayi; i++) {
                    cout << "M ";
                }
            } else if (i == (sayi / 2) + 1) {
                for (int k = 1; k <= 2*sayi; k++) {
                    if (k == sayi-alan.length()+1) {
                        cout << alan;
                    } 
                    if (k == 1 || k == 2*sayi-2-alan.length()) {
                        cout << "M";
                    } 
                    cout << " ";
                }
            }
            else {
                for (int j = 1; j <= 2*sayi; j++) {
                    if (j == 1 || j == 2*sayi-2) {
                        cout << "M";
                    } 
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}
