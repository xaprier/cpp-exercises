#include <iostream>
using namespace std;

int main() {
    //Yorum satırı eklenecek

    cout << "Sayi : ";
    int sayi;
    cin >> sayi;
    int bolenadedi;
    int asaladedi = 0;
  
    for (int i = 2; i <= sayi; i++) {
        bolenadedi = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                bolenadedi++;
                break;
            }
        }
        if (bolenadedi == 0) {
            cout << i << " ";
            asaladedi++;
        }
    }
    cout << endl;
    cout << "1 ile " << sayi << " arasi toplam " << asaladedi << " adet asal sayi var.";

    return 0;
}