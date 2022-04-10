#include <iostream>

using namespace std;

void sirala(int **ptr, int satir, int sutun);

int main() {
    int M, N;
    cout << "Matrisin satir sayisini giriniz: ";
    cin >> M;
    cout << "Matrisin sutun sayisini giriniz: ";
    cin >> N;
    int **ptr = new int *[M];
    for (int a = 0; a < M; a++)
        ptr[a] = new int[N];

    cout << "Matris elemanlarini satir satir giriniz: " << endl;
    for (int b = 0; b < M; b++)
        for (int c = 0; c < N; c++)
            cin >> *(*(ptr + b) + c);

    sirala(ptr, M, N);
}
void sirala(int **ptr, int satir, int sutun) {
    int temporary;
    for (int k = 0; k < satir; k++) {
        for (int i = 0; i < sutun; i++) {
            for (int j = 0; j < sutun - 1 - i; j++) {
                if (ptr[k][j] > ptr[k][j + 1]) {
                    temporary = ptr[k][j + 1];
                    ptr[k][j + 1] = ptr[k][j];
                    ptr[k][j] = temporary;
                }
            }
        }
    }
    cout << "Satirlari buyukten kucuge siralanmis matris su sekildedir:" << endl;
    for (int sayi1 = 0; sayi1 < satir; sayi1++) {
        for (int sayi2 = 0; sayi2 < sutun; sayi2++) {
            cout << *(*(ptr + sayi1) + sayi2) << " ";
        }
        cout << endl;
    }
}
