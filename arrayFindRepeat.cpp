#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N değeri girin: ";
    cin >> N;
    int *dizi = new int[N];
    int *dizi2 = new int[N];
    for (int i = 0; i < N; i++) {
        cout << "dizi değeri girin: ";
        cin >> dizi[i];
        dizi2[i] = -1;
    }
    int adet;
    for (int i = 0; i < N; i++) {
        adet = 1;
        for (int j = i + 1; j < N; j++) {
            if (dizi[i] == dizi[j]) {
                adet++;
                dizi2[j] = 0;
            }
        }
        if (dizi2[i] != 0) {
            dizi2[i] = adet;
        }
    }
    for (int i = 0; i < N; i++) {
        if (dizi2[i] != 0) {
            cout << dizi[i] << " sayısı " << dizi2[i] << " kere tekrarlanıyor." << endl;
        }
    }
}