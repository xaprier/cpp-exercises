#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "N değeri girin: ";
    cin >> N;
    int **dizi = new int *[N + 1];
    for (int i = 0; i < N + 1; i++) {
        dizi[i] = new int[N + 1];
    }
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < N + 1; j++) {
            dizi[i][j] = 0;
        }
    }
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < N + 1; j++) {
            if (i == N && j == N) {
                for (int k = 0; k < N; k++) {
                    dizi[i][j] += dizi[k][k];
                }
            } else if (i == N) {
                for (int k = 0; k < N; k++) {
                    dizi[i][j] += dizi[k][j];
                }
            } else if (j == N) {
                for (int k = 0; k < N; k++) {
                    dizi[i][j] += dizi[i][k];
                }
            } else {
                dizi[i][j] = rand() % 10 + 10;
            }
        }
    }
    int kontrol = 0;
    cout << "Matris" << endl;
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < N + 1; j++) {
            if (j == N - 1) {
                cout << dizi[i][j] << "\t\t";
            } else if (i == N) {
                if (j == 0 && kontrol == 0) {
                    cout << endl;
                    kontrol++;
                }
                cout << dizi[i][j] << "\t";
            } else {
                cout << dizi[i][j] << "\t";
            }
        }
        cout << endl;
    }
}
