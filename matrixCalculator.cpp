#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

#pragma region Fonksiyonlar
int **matrisTranspoz(int **dizi, int m, int n) {
    int** sonuc = new int* [n];
    for (int i = 0; i < n; i++) { sonuc[i] = new int[m]; }
    for (int i = 0; i < n; i++) { for (int j = 0; j < m; j++) { sonuc[i][j] = dizi[j][i]; }}
    return sonuc;
}

int **matrislerCarpim(int **dizi1, int **dizi2, int m, int n, int p) {
    int **sonuc = new int *[m];
    for (int i = 0; i < m; i++) { sonuc[i] = new int[p]; }

    for (int i = 0; i < m; i++) { for (int j = 0; j < p; j++) { sonuc[i][j] = 0; } }

    for (int i = 0; i < m; i++) { for (int j = 0; j < p; j++) { for (int k = 0; k < n; k++) { sonuc[i][j] += (dizi1[i][k] * dizi2[k][j]); } } }
    return sonuc;
}

int **skalerCarpim(int **dizi1, int m, int n, int carpilacaksayi) {
    int **sonuc = new int *[m];
    for (int i = 0; i < m; i++) { sonuc[i] = new int[n]; }
    for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { sonuc[i][j] = dizi1[i][j] * carpilacaksayi; } }
    return sonuc;
}

int **matrislerToplami(int **dizi1, int **dizi2, int m, int n) {
    int **sonuc = new int *[m];
    for (int i = 0; i < m; i++) { sonuc[i] = new int[n]; }
    for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { sonuc[i][j] = dizi1[i][j] + dizi2[i][j]; } }
    return sonuc;
}

int **skalerToplam(int **dizi1, int m, int n, int toplancaksayi) {
    int **sonuc = new int *[m];
    for (int i = 0; i < m; i++) { sonuc[i] = new int[n]; }
    for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { sonuc[i][j] = dizi1[i][j] + toplancaksayi; } }
    return sonuc;
}

int **matrislerCikarimi(int **dizi1, int **dizi2, int m, int n) {
    int **sonuc = new int *[m];
    for (int i = 0; i < m; i++) { sonuc[i] = new int[n]; }
    for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { sonuc[i][j] = dizi1[i][j] - dizi2[i][j]; } }
    return sonuc;
}

int **skalerCikarim(int **dizi1, int m, int n, int cikarilacaksayi) {
    int **sonuc = new int *[m];
    for (int i = 0; i < m; i++) { sonuc[i] = new int[n]; }
    for (int i = 0; i < m; i++) { for (int j = 0; j < n ; j++) { sonuc[i][j] = dizi1[i][j] - cikarilacaksayi; } }
    return sonuc;
}

void matrisBastir(int **dizi, int m, int n) {
    for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { cout << dizi[i][j] << "\t"; } cout << endl; }
}
#pragma endregion Fonksiyonlar

int main() {
    int m, n;
    cout << "Matrisin Sat??r Say??s??n?? Giriniz: ";
    cin >> m;
    cout << "Matrisin S??tun Say??s??n?? Giriniz: ";
    cin >> n;

    int **dizi1 = new int *[m]; // M X N
    for (int i = 0; i < m; i++) { dizi1[i] = new int[n]; }
    for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { cout << "Matrisin " << i << "x" << j << " konumunu giriniz: "; /*dizi1[i][j] = rand() % 9 + 1;*/ cin >> dizi1[i][j]; } }

    int secenek;
    string secenekduzeltme;
    system("clear");
    system("cls");
    a:
    cout << "A??a????daki se??eneklerden bir tanesini se??iniz...\n1 - Skaler ??arp??m\n2 - Matris ??arp??m\n3 - Skaler Toplam\n4 - Matris Toplam\n5 - Skaler ????karma\n6 - Matris ????karma\n7 - Transpoz\n8 - ????k????" << endl;
    cin >> secenekduzeltme;
    if (isdigit(secenekduzeltme.at(0))) {
        secenek = stoi(secenekduzeltme);
    } else {
        cout << "Girdi??iniz de??er bir say?? de??il! Tekrar deneyin" << endl;
        goto a;
    }
    switch (secenek) {
        case 1: {
            // ??arp??lacak de??i??ken olu??turulmas?? ve input al??nmas??
            int carpilacaksayi; cout << "??arp??lacak say??y?? giriniz: "; cin >> carpilacaksayi;
            // ba??l??klar??n, dizilerin bast??r??lmas?? ve dizimizin yeni halinin atanmas??
            cout << "??arp??lmadan ??nceki Matrisimiz" << endl;
            matrisBastir(dizi1, m, n);
            dizi1 = skalerCarpim(dizi1, m, n, carpilacaksayi);
            cout << "??arp??mdan Sonraki Matrisimiz" << endl;
            matrisBastir(dizi1, m, n);
            break;
        }
        case 2: {
            cout << "2.Matrisin S??tun Say??s??n?? Giriniz: "; int p; cin >> p;
            int **dizi2 = new int *[n];
            for (int i = 0; i < n; i++) { dizi2[i] = new int[p]; } // her n sat??r?? i??in p s??tun olu??tur
            // 2.dizinin elemanlar??n??n al??nmas??
            for (int i = 0; i < n; i++) { for (int j = 0; j < p; j++) { cout << "2.Matrisin " << i << "x" << j << " konumunu giriniz: "; /*dizi2[i][j] = rand() % 9 + 1;*/ cin >> dizi2[i][j]; } }
            // 1.dizi ve 2.dizinin bast??r??lmas?? ve ba??l??klar
            cout << "1.Matris" << endl; matrisBastir(dizi1, m, n); cout << "2.Matris" << endl; matrisBastir(dizi2, n, p);
            cout << "??arp??m Sonucu" << endl;
            // sonuc dizisinin olu??turulmas??
            int **sonuc = new int *[m];
            for (int i = 0; i < m; i++) { sonuc[i] = new int[p]; }
            // sonuc atanmas?? ve bast??r??lmas??
            sonuc = matrislerCarpim(dizi1, dizi2, m, n, p); matrisBastir(sonuc, m, p);
            // dizilerin silinmesi
            for (int i = 0; i < n; i++) { delete[] dizi2[i]; } delete[] dizi2;
            for (int i = 0; i < m; i++) { delete[] sonuc[i]; } delete[] sonuc;
            break;
        }
        case 3: {
            // toplanacak de??i??ken olu??turulmas?? ve input al??nmas??
            int toplancaksayi; cout << "Toplanacak say??y?? giriniz: "; cin >> toplancaksayi;
            // ba??l??klar, dizimizin bast??r??lmas?? ve dizimizin yeni halinin atanmas??
            cout << "Toplanmadan ??nceki Matrisimiz" << endl;
            matrisBastir(dizi1, m, n);
            dizi1 = skalerToplam(dizi1, m, n, toplancaksayi);
            cout << "Toplamdan Sonraki Matrisimiz" << endl;
            matrisBastir(dizi1, m, n);
            break;
        }
        case 4: {
            // toplanacak 2.dizinin olu??turulmas??
            int **dizi2 = new int *[m];
            for (int i = 0; i < m; i++) { dizi2[i] = new int[n]; }
            // 2.dizinin elemanlar??n??n al??nmas??
            for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { cout << "2.Matrisin " << i << "x" << j << " konumunu giriniz: "; /*dizi2[i][j] = rand() % 9 + 1;*/ cin >> dizi2[i][j]; } } 
            // 1.dizi ve 2.dizinin bast??r??lmas?? ve ba??l??klar
            cout << "1.Matris" << endl; matrisBastir(dizi1, m, n); cout << "2.Matris" << endl; matrisBastir(dizi2, m, n); cout << "Toplam Sonucu" << endl;
            // sonuc dizisinin olu??turulmas?? ve de??erin atanmas?? ve bast??r??lmas??
            int **sonuc = new int *[m]; for (int i = 0; i < m; i++) { sonuc[i] = new int[n]; } sonuc = matrislerToplami(dizi1, dizi2, m, n); matrisBastir(sonuc, m, n);
            // dizilerin silinmesi
            for (int i = 0; i < m; i++) { delete[] dizi2[i]; } delete[] dizi2;
            for (int i = 0; i < m; i++) { delete[] sonuc[i]; } delete[] sonuc;
            break;
        }
        case 5: {
            // ????kar??lacak de??i??ken olu??turulmas?? ve input al??nmas??
            int cikarilacaksayi; cout << "????kar??lacak say??y?? giriniz: "; cin >> cikarilacaksayi;
            // ba??l??klar, dizimizin bast??r??lmas?? ve dizimizin yeni halinin atanmas??
            cout << "????kar??lmadan ??nceki Matrisimiz" << endl;
            matrisBastir(dizi1, m, n);
            dizi1 = skalerCikarim(dizi1, m, n, cikarilacaksayi);
            cout << "????kar??lmadan Sonraki Matrisimiz" << endl;
            matrisBastir(dizi1, m, n);
            break;
        }
        case 6: {
            // ????kar??lacak 2.dizinin olu??turulmas??
            int **dizi2 = new int *[m];
            for (int i = 0; i < m; i++) { dizi2[i] = new int[n]; }
            // 2.dizinin elemanlar??n??n al??nmas??
            for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { cout << "2.Matrisin " << i << "x" << j << " konumunu giriniz: "; /*dizi2[i][j] = rand() % 9 + 1;*/ cin >> dizi2[i][j]; } }
            // 1.dizi ve 2.dizinin bast??r??lmas?? ve ba??l??klar
            cout << "1.Matris" << endl; matrisBastir(dizi1, m, n); cout << "2.Matris" << endl; matrisBastir(dizi2, m, n); cout << "????kar??m Sonucu" << endl;
            // sonuc dizisinin olu??turulmas?? ve de??erin atanmas?? ve bast??r??lmas??
            int **sonuc = new int *[m]; for (int i = 0; i < m; i++) { sonuc[i] = new int[n]; } sonuc = matrislerCikarimi(dizi1, dizi2, m, n); matrisBastir(sonuc, m, n);
            // dizilerin silinmesi
            for (int i = 0; i < m; i++) { delete[] dizi2[i]; } delete[] dizi2;
            for (int j = 0; j < m; j++) { delete[] sonuc[j]; } delete[] sonuc;
            break;
        }
        case 7: {
            // sonucun atanmas?? i??in nxm dizi olu??turulmas??
            int** dizi2 = new int* [n];
            for (int i = 0; i < n; i++) { dizi2[i] = new int[m]; }
            // bast??rma atama i??lemleri
            cout << "Transpoz ??ncesi Matris" << endl;
            matrisBastir(dizi1, m, n);
            dizi2 = matrisTranspoz(dizi1, m, n);
            cout << "Transpoz Sonras?? Matris" << endl;
            matrisBastir(dizi2, n, m);
            for (int i = 0; i < n; i++) { delete[] dizi2[i]; } delete[] dizi2;
            break;
        }
        case 8: {
            cout << "Programdan ????k??l??yor.." << endl;
            break;
        }
        default: {
            cout << "Hatal?? se??im... Tekrar deneyin" << endl;
            goto a;
            break;
        }
    }
    for (int i = 0; i < m; i++) { delete[] dizi1[i]; } delete[] dizi1;
}
