#include <iostream>
#include <cctype>
#include <cmath>

using namespace std;

#pragma region Fonksiyonlar

int **matrisTranspoz( int **dizi, int m, int n ) {
	int **sonuc = new int *[n];
	for (int i = 0; i < n; i++) { sonuc[ i ] = new int[m]; }
	for (int i = 0; i < n; i++) { for (int j = 0; j < m; j++) { sonuc[ i ][ j ] = dizi[ j ][ i ]; }}
	return sonuc;
}

int **matrislerCarpim( int **dizi1, int **dizi2, int m, int n, int p ) {
	int **sonuc = new int *[m];
	for (int i = 0; i < m; i++) { sonuc[ i ] = new int[p]; }

	for (int i = 0; i < m; i++) { for (int j = 0; j < p; j++) { sonuc[ i ][ j ] = 0; }}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			for (int k = 0; k < n; k++) {
				sonuc[ i ][ j ] += (dizi1[ i ][ k ] * dizi2[ k ][ j ]);
			}
		}
	}
	return sonuc;
}

int **skalerCarpim( int **dizi1, int m, int n, int carpilacaksayi ) {
	int **sonuc = new int *[m];
	for (int i = 0; i < m; i++) { sonuc[ i ] = new int[n]; }
	for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { sonuc[ i ][ j ] = dizi1[ i ][ j ] * carpilacaksayi; }}
	return sonuc;
}

int **matrislerToplami( int **dizi1, int **dizi2, int m, int n ) {
	int **sonuc = new int *[m];
	for (int i = 0; i < m; i++) { sonuc[ i ] = new int[n]; }
	for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { sonuc[ i ][ j ] = dizi1[ i ][ j ] + dizi2[ i ][ j ]; }}
	return sonuc;
}

int **skalerToplam( int **dizi1, int m, int n, int toplancaksayi ) {
	int **sonuc = new int *[m];
	for (int i = 0; i < m; i++) { sonuc[ i ] = new int[n]; }
	for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { sonuc[ i ][ j ] = dizi1[ i ][ j ] + toplancaksayi; }}
	return sonuc;
}

int **matrislerCikarimi( int **dizi1, int **dizi2, int m, int n ) {
	int **sonuc = new int *[m];
	for (int i = 0; i < m; i++) { sonuc[ i ] = new int[n]; }
	for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { sonuc[ i ][ j ] = dizi1[ i ][ j ] - dizi2[ i ][ j ]; }}
	return sonuc;
}

int **skalerCikarim( int **dizi1, int m, int n, int cikarilacaksayi ) {
	int **sonuc = new int *[m];
	for (int i = 0; i < m; i++) { sonuc[ i ] = new int[n]; }
	for (int i = 0; i < m; i++) { for (int j = 0; j < n; j++) { sonuc[ i ][ j ] = dizi1[ i ][ j ] - cikarilacaksayi; }}
	return sonuc;
}

void matrisBastir( int **dizi, int m, int n ) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) { cout << dizi[ i ][ j ] << "\t"; }
		cout << endl;
	}
}

#pragma endregion Fonksiyonlar

int main() {
	int m, n;
	cout << "Matrisin Satır Sayısını Giriniz: ";
	cin >> m;
	cout << "Matrisin Sütun Sayısını Giriniz: ";
	cin >> n;

	int **dizi1 = new int *[m]; // M X N
	for (int i = 0; i < m; i++) { dizi1[ i ] = new int[n]; }
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Matrisin " << i << "x" << j << " konumunu giriniz: "; /*dizi1[i][j] = rand() % 9 + 1;*/cin
					>> dizi1[ i ][ j ];
		}
	}

	int secenek;
	string secenekduzeltme;
	system("clear");
	system("cls");
	a:
	cout
			<< "Aşağıdaki seçeneklerden bir tanesini seçiniz...\n1 - Skaler Çarpım\n2 - Matris Çarpım\n3 - Skaler Toplam\n4 - Matris Toplam\n5 - Skaler Çıkarma\n6 - Matris Çıkarma\n7 - Transpoz\n8 - Çıkış"
			<< endl;
	cin >> secenekduzeltme;
	if (isdigit(secenekduzeltme.at(0))) {
		secenek = stoi(secenekduzeltme);
	} else {
		cout << "Girdiğiniz değer bir sayı değil! Tekrar deneyin" << endl;
		goto a;
	}
	switch (secenek) {
		case 1: {
			// çarpılacak değişken oluşturulması ve input alınması
			int carpilacaksayi;
			cout << "Çarpılacak sayıyı giriniz: ";
			cin >> carpilacaksayi;
			// başlıkların, dizilerin bastırılması ve dizimizin yeni halinin atanması
			cout << "Çarpılmadan Önceki Matrisimiz" << endl;
			matrisBastir(dizi1, m, n);
			dizi1 = skalerCarpim(dizi1, m, n, carpilacaksayi);
			cout << "Çarpımdan Sonraki Matrisimiz" << endl;
			matrisBastir(dizi1, m, n);
			break;
		}
		case 2: {
			cout << "2.Matrisin Sütun Sayısını Giriniz: ";
			int p;
			cin >> p;
			int **dizi2 = new int *[n];
			for (int i = 0; i < n; i++) { dizi2[ i ] = new int[p]; } // her n satırı için p sütun oluştur
			// 2.dizinin elemanlarının alınması
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < p; j++) {
					cout << "2.Matrisin " << i << "x" << j << " konumunu giriniz: "; /*dizi2[i][j] = rand() % 9 + 1;*/
					cin >> dizi2[ i ][ j ];
				}
			}
			// 1.dizi ve 2.dizinin bastırılması ve başlıklar
			cout << "1.Matris" << endl;
			matrisBastir(dizi1, m, n);
			cout << "2.Matris" << endl;
			matrisBastir(dizi2, n, p);
			cout << "Çarpım Sonucu" << endl;
			// sonuc dizisinin oluşturulması
			int **sonuc = new int *[m];
			for (int i = 0; i < m; i++) { sonuc[ i ] = new int[p]; }
			// sonuc atanması ve bastırılması
			sonuc = matrislerCarpim(dizi1, dizi2, m, n, p);
			matrisBastir(sonuc, m, p);
			// dizilerin silinmesi
			for (int i = 0; i < n; i++) { delete[] dizi2[ i ]; }
			delete[] dizi2;
			for (int i = 0; i < m; i++) { delete[] sonuc[ i ]; }
			delete[] sonuc;
			break;
		}
		case 3: {
			// toplanacak değişken oluşturulması ve input alınması
			int toplancaksayi;
			cout << "Toplanacak sayıyı giriniz: ";
			cin >> toplancaksayi;
			// başlıklar, dizimizin bastırılması ve dizimizin yeni halinin atanması
			cout << "Toplanmadan Önceki Matrisimiz" << endl;
			matrisBastir(dizi1, m, n);
			dizi1 = skalerToplam(dizi1, m, n, toplancaksayi);
			cout << "Toplamdan Sonraki Matrisimiz" << endl;
			matrisBastir(dizi1, m, n);
			break;
		}
		case 4: {
			// toplanacak 2.dizinin oluşturulması
			int **dizi2 = new int *[m];
			for (int i = 0; i < m; i++) { dizi2[ i ] = new int[n]; }
			// 2.dizinin elemanlarının alınması
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					cout << "2.Matrisin " << i << "x" << j << " konumunu giriniz: "; /*dizi2[i][j] = rand() % 9 + 1;*/
					cin >> dizi2[ i ][ j ];
				}
			}
			// 1.dizi ve 2.dizinin bastırılması ve başlıklar
			cout << "1.Matris" << endl;
			matrisBastir(dizi1, m, n);
			cout << "2.Matris" << endl;
			matrisBastir(dizi2, m, n);
			cout << "Toplam Sonucu" << endl;
			// sonuc dizisinin oluşturulması ve değerin atanması ve bastırılması
			int **sonuc = new int *[m];
			for (int i = 0; i < m; i++) { sonuc[ i ] = new int[n]; }
			sonuc = matrislerToplami(dizi1, dizi2, m, n);
			matrisBastir(sonuc, m, n);
			// dizilerin silinmesi
			for (int i = 0; i < m; i++) { delete[] dizi2[ i ]; }
			delete[] dizi2;
			for (int i = 0; i < m; i++) { delete[] sonuc[ i ]; }
			delete[] sonuc;
			break;
		}
		case 5: {
			// çıkarılacak değişken oluşturulması ve input alınması
			int cikarilacaksayi;
			cout << "Çıkarılacak sayıyı giriniz: ";
			cin >> cikarilacaksayi;
			// başlıklar, dizimizin bastırılması ve dizimizin yeni halinin atanması
			cout << "Çıkarılmadan Önceki Matrisimiz" << endl;
			matrisBastir(dizi1, m, n);
			dizi1 = skalerCikarim(dizi1, m, n, cikarilacaksayi);
			cout << "Çıkarılmadan Sonraki Matrisimiz" << endl;
			matrisBastir(dizi1, m, n);
			break;
		}
		case 6: {
			// çıkarılacak 2.dizinin oluşturulması
			int **dizi2 = new int *[m];
			for (int i = 0; i < m; i++) { dizi2[ i ] = new int[n]; }
			// 2.dizinin elemanlarının alınması
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					cout << "2.Matrisin " << i << "x" << j << " konumunu giriniz: "; /*dizi2[i][j] = rand() % 9 + 1;*/
					cin >> dizi2[ i ][ j ];
				}
			}
			// 1.dizi ve 2.dizinin bastırılması ve başlıklar
			cout << "1.Matris" << endl;
			matrisBastir(dizi1, m, n);
			cout << "2.Matris" << endl;
			matrisBastir(dizi2, m, n);
			cout << "Çıkarım Sonucu" << endl;
			// sonuc dizisinin oluşturulması ve değerin atanması ve bastırılması
			int **sonuc = new int *[m];
			for (int i = 0; i < m; i++) { sonuc[ i ] = new int[n]; }
			sonuc = matrislerCikarimi(dizi1, dizi2, m, n);
			matrisBastir(sonuc, m, n);
			// dizilerin silinmesi
			for (int i = 0; i < m; i++) { delete[] dizi2[ i ]; }
			delete[] dizi2;
			for (int j = 0; j < m; j++) { delete[] sonuc[ j ]; }
			delete[] sonuc;
			break;
		}
		case 7: {
			// sonucun atanması için nxm dizi oluşturulması
			int **dizi2 = new int *[n];
			for (int i = 0; i < n; i++) { dizi2[ i ] = new int[m]; }
			// bastırma atama işlemleri
			cout << "Transpoz Öncesi Matris" << endl;
			matrisBastir(dizi1, m, n);
			dizi2 = matrisTranspoz(dizi1, m, n);
			cout << "Transpoz Sonrası Matris" << endl;
			matrisBastir(dizi2, n, m);
			for (int i = 0; i < n; i++) { delete[] dizi2[ i ]; }
			delete[] dizi2;
			break;
		}
		case 8: {
			cout << "Programdan çıkılıyor.." << endl;
			break;
		}
		default: {
			cout << "Hatalı seçim... Tekrar deneyin" << endl;
			goto a;
			break;
		}
	}
	for (int i = 0; i < m; i++) { delete[] dizi1[ i ]; }
	delete[] dizi1;
}
