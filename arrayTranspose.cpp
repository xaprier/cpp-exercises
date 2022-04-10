#include <iostream>

using namespace std;

int **matrisTranspoz(int **dizi, int a) {
    int **dizi2 = new int *[a];
    for (int r1 = 0; r1 < a; r1++) {
        *(dizi2 + r1) = new int[a];
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            *(*(dizi2 + j) + i) = *(*(dizi + i) + j);
        }
    }
    return dizi2;
}

void matrisAl(int **dizi, int a) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << "dizinin " << i << " " << j << " indisinin değerini giriniz: ";
            cin >> *(*(dizi + i) + j);
            //*(*(dizi + i) + j) = rand() % 9 + 1;
        }
    }
}

void matrisBastir(int **dizi, int a) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << *(*(dizi + i) + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Kare matris boyutunu giriniz: ";
    int boyut;
    cin >> boyut;
    int **dizi = new int *[boyut];
    for (int i = 0; i < boyut; i++) {
        dizi[i] = new int[boyut];
    }
    matrisAl(dizi, boyut);
    matrisBastir(dizi, boyut);
    cout << endl;
    dizi = matrisTranspoz(dizi, boyut);
    matrisBastir(dizi, boyut);
}
