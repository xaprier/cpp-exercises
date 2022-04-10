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
    // tek boyutlu olarak düşünüp hesaplayacağız
    for (int i = 0; i < satir * sutun - 1; i++) {
        for (int j = 0; j < satir * sutun - 1 - i; j++) {
            // satir = j/sutun
            // sutun = j%sutun
            if (*(*(ptr + j / sutun) + j % sutun) > *(*(ptr + (j + 1) / sutun) + (j + 1) % sutun)) {
                temporary = *(*(ptr + (j + 1) / sutun) + (j + 1) % sutun);
                *(*(ptr + (j + 1) / sutun) + (j + 1) % sutun) = *(*(ptr + j / sutun) + j % sutun);
                *(*(ptr + j / sutun) + j % sutun) = temporary;
            }
        }
    }
    cout << "Butun dizinin buyukten kucuge siralanmis matris hali su sekildedir:" << endl;
    for (int sayi1 = 0; sayi1 < satir; sayi1++) {
        for (int sayi2 = 0; sayi2 < sutun; sayi2++) {
            cout << *(*(ptr + sayi1) + sayi2) << " ";
        }
        cout << endl;
    }
}
