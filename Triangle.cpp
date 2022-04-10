#include <iostream>

using namespace std;

int main() {

    cout << "Satır sayısı giriniz: ";
    int satir;
    cin >> satir;
    for (int i = 1; i <= satir; i++) {
        for (int j = 1; j <= satir-i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    
} 
