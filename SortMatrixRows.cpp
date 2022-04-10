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
    for (int i = 0; i < sutun; i++) {                  // 0 1 2 3
        for (int j = 0; j < satir; j++) {              // 0 1 2
            for (int k = 0; k < satir - j - 1; k++) {  //
                if (*(*(ptr + k) + i) < *(*(ptr + (k + 1)) + i)) {
                    temporary = *(*(ptr + (k + 1)) + i);
                    *(*(ptr + (k + 1)) + i) = *(*(ptr + k) + i);
                    *(*(ptr + k) + i) = temporary;
                }
            }
        }
    }
    cout << "Sutunlari kucukten buyuge siralanmis matris su sekildedir:" << endl;
    for (int sayi1 = 0; sayi1 < satir; sayi1++) {
        for (int sayi2 = 0; sayi2 < sutun; sayi2++) {
            cout << *(*(ptr + sayi1) + sayi2) << " ";
        }
        cout << endl;
    }
}
