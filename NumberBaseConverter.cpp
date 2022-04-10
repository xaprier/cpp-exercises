#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;
// eski ondalık fonksiyonlar...
/*
string ondanikiye(int sayi, double ondalikli) {
    int i, sonuc[10];
    ostringstream os;
    for (i = 0; sayi > 0; i++) {
        sonuc[i] = sayi % 2;
        sayi /= 2;
    }
    for (i = i - 1; i >= 0; i--) {
        os << sonuc[i];
    }
    os << ".";
    while (true) {
        ondalikli *= 2;
        if (fmod(ondalikli, 1) == 0) {
            os << "1";
            break;
        } else if ((int)ondalikli >= 1) {
            ondalikli--;
            os << "1";
        } else {
            os << "0";
        }
    }
    string son(os.str());
    return son;
}

string ondansekize(int sayi, double ondalikli) {
    int i, sonuc[1000];
    ostringstream os;
    for (i = 0; sayi > 0; i++) {
        sonuc[i] = sayi % 8;
        sayi /= 8;
    }
    for (i = i - 1; i >= 0; i--) {
        os << sonuc[i];
    }
    os << ".";
    while (true) {
        ondalikli *= 8;
        if (fmod(ondalikli, 1) == 0) {
            os << ondalikli;
            break;
        } else {
            os << (int)ondalikli;
            ondalikli -= (int)ondalikli;
        }
    }
    string son(os.str());
    return son;
}

string ondanonaltiya(int sayi, double ondalikli) {
    int i, sonuc[1000];
    ostringstream os;
    for (i = 0; sayi > 0; i++) {
        sonuc[i] = sayi % 16;
        sayi /= 16;
    }
    for (i = i - 1; i >= 0; i--) {
        if (sonuc[i] == 15)
            os << "F";
        else if (sonuc[i] == 14)
            os << "E";
        else if (sonuc[i] == 13)
            os << "D";
        else if (sonuc[i] == 12)
            os << "C";
        else if (sonuc[i] == 11)
            os << "B";
        else if (sonuc[i] == 10)
            os << "A";
        else
            os << sonuc[i];
    }
    os << ".";
    while (true) {
        ondalikli *= 16;
        if (fmod(ondalikli, 1) == 0) {
            if (ondalikli == 15)
                os << "F";
            else if (ondalikli == 14)
                os << "E";
            else if (ondalikli == 13)
                os << "D";
            else if (ondalikli == 12)
                os << "C";
            else if (ondalikli == 11)
                os << "B";
            else if (ondalikli == 10)
                os << "A";
            else
                os << (int)ondalikli;
            break;
        } else {
            if ((int)ondalikli == 15) {
                os << "F";
                ondalikli -= (int)ondalikli;
            } else if ((int)ondalikli == 14) {
                os << "E";
                ondalikli -= (int)ondalikli;
            } else if ((int)ondalikli == 13) {
                os << "D";
                ondalikli -= (int)ondalikli;
            } else if ((int)ondalikli == 12) {
                os << "C";
                ondalikli -= (int)ondalikli;
            } else if ((int)ondalikli == 11) {
                os << "B";
                ondalikli -= (int)ondalikli;
            } else if ((int)ondalikli == 10) {
                os << "A";
                ondalikli -= (int)ondalikli;
            } else {
                os << (int)ondalikli;
                ondalikli -= (int)ondalikli;
            }
        }
    }
    string son(os.str());
    return son;
}

string ikidenona(int sayi, double ondalikli) {
    int birlerbasamagi, sonuc = 0, basamak;
    double sonuc2 = 0;
    ostringstream os;
    for (int j = 0; sayi > 0; j++) {
        birlerbasamagi = sayi % 10;
        sayi = sayi / 10;
        sonuc += (birlerbasamagi * pow(2, j));
    }
    for (int i = -1; ondalikli != 0; i--) {
        ondalikli *= 10;
        sonuc2 += (int)ondalikli * pow(2, i);
        ondalikli -= (int)ondalikli;
    }
    os << sonuc + sonuc2;
    string son(os.str());
    return son;
}

string ikidensekize(int sayi, double ondalikli) {
    string deger = ikidenona(sayi, ondalikli);
    int tam = (int)stod(deger);
    double onluk = stod(deger) - tam;

    return ondansekize(tam, onluk);
}

string ikidenonaltiya(int sayi, double ondalikli) {
    string deger = ikidenona(sayi, ondalikli);
    int tam = (int)stod(deger);
    double onluk = stod(deger) - tam;

    return ondanonaltiya(tam, onluk);
}
*/

/*string bozuk(int sayi, double ondalikli) {
    int birlerbasamagi, sonuc = 0, tam;
    float virgul;
    double sonuc2 = 0;
    ostringstream os;
    ostringstream os2;
    string deg1;
    int donmeadedi = deg1.length();
    for (int j = 0; sayi > 0; j++) {
        birlerbasamagi = sayi % 10;
        sayi = sayi / 10;
        sonuc += (birlerbasamagi * pow(8, j));
    }
    for (int i = -1; ondalikli != 0; i--) {
        ondalikli *= 10;
        if (fmod(ondalikli, 1) == 0) {
            sonuc2 += ondalikli * pow(8, i);
            break;
        } else {
            sonuc2 += (int)ondalikli * pow(8, i);
            cout << ondalikli << " - " << (int)ondalikli << " = " << ondalikli - (int)ondalikli << endl;
            ondalikli -= (int)ondalikli;
        }
    }
    os << sonuc + sonuc2;
    string son(os.str());
    return son;
}*/

// ondalikli değerini int olarak aldığımız aşırı yakın değer veren fonksiyonlarımız

/*

string ikidensekizev2(int sayi, int ondalikli) {
    string deger = ikidenonav2(sayi, ondalikli);
    double fullsayi = stod(deger);
    int tam = stoi(deger);
    double virgul = stod(deger) - stoi(deger);
    int fulluzunluk = deger.length();
    int tamuzunluk = to_string(tam).length();
    int virguluzunluk = fulluzunluk - tamuzunluk - 1;
    virgul = virgul * pow(10, virguluzunluk - 1);
    return ondansekizev2(tam, virgul);
}

string ikidenonaltiyav2(int sayi, int ondalikli) {
    string deger = ikidenonav2(sayi, ondalikli);
    double fullsayi = stod(deger);
    int tam = stoi(deger);
    double virgul = stod(deger) - stoi(deger);
    int fulluzunluk = deger.length();
    int tamuzunluk = to_string(tam).length();
    int virguluzunluk = fulluzunluk - tamuzunluk - 1;
    virgul = virgul * pow(10, virguluzunluk - 1);
    return ondanonaltiyav2(tam, virgul);
}

string sekizdenikiyev2(int sayi, int ondalikli) {
    string deger = sekizdenonav2(sayi, ondalikli);
    double fullsayi = stod(deger);
    int tam = stoi(deger);
    double virgul = stod(deger) - stoi(deger);
    int fulluzunluk = deger.length();
    int tamuzunluk = to_string(tam).length();
    int virguluzunluk = fulluzunluk - tamuzunluk - 1;
    virgul = virgul * pow(10, virguluzunluk - 1);
    return ondanikiyev2(tam, virgul);
}

string sekizdenonaltiyav2(int sayi, int ondalikli) {
    string deger = sekizdenonav2(sayi, ondalikli);
    double fullsayi = stod(deger);
    int tam = stoi(deger);
    double virgul = stod(deger) - stoi(deger);
    int fulluzunluk = deger.length();
    int tamuzunluk = to_string(tam).length();
    int virguluzunluk = fulluzunluk - tamuzunluk - 1;
    virgul = virgul * pow(10, virguluzunluk - 1);
    return ondanonaltiyav2(tam, virgul);
}

string onaltidanonav2(string sayi, string ondalikli) {
    int toplam = 0;
    double toplam2 = 0;
    string tam[sayi.length()], onda[ondalikli.length()];
    for (int i = 0; i < sayi.length(); i++) {
        tam[i] = sayi.at(i);
    }
    for (int i = 0; i < ondalikli.length(); i++) {
        onda[i] = ondalikli.at(i);
    }
    for (int i = 0, j = sayi.length() - 1; i < sayi.length(); i++, j--) {
        if (tam[j] == "F") {
            toplam += 15 * pow(16, i);
        } else if (tam[j] == "E") {
            toplam += 14 * pow(16, i);
        } else if (tam[j] == "D") {
            toplam += 13 * pow(16, i);
        } else if (tam[j] == "C") {
            toplam += 12 * pow(16, i);
        } else if (tam[j] == "B") {
            toplam += 11 * pow(16, i);
        } else if (tam[j] == "A") {
            toplam += 10 * pow(16, i);
        } else {
            toplam += stoi(tam[j]) * pow(16, i);
        }
    }
    for (int i = -1, j = 0; j < ondalikli.length(); i--, j++) {
        if (onda[j] == "F") {
            toplam2 += 15 * pow(16, i);
        } else if (onda[j] == "E") {
            toplam2 += 14 * pow(16, i);
        } else if (onda[j] == "D") {
            toplam2 += 13 * pow(16, i);
        } else if (onda[j] == "C") {
            toplam2 += 12 * pow(16, i);
        } else if (onda[j] == "B") {
            toplam2 += 11 * pow(16, i);
        } else if (onda[j] == "A") {
            toplam2 += 10 * pow(16, i);
        } else {
            toplam2 += stoi(onda[j]) * pow(16, i);
        }
    }
    string son = to_string(toplam + toplam2);
    return son;
}

string onaltidanikiyev2(string sayi, string ondalikli) {
    string deger = onaltidanonav2(sayi, ondalikli);
    double fullsayi = stod(deger);
    int tam = stoi(deger);
    double virgul = stod(deger) - stoi(deger);
    int fulluzunluk = deger.length();
    int tamuzunluk = to_string(tam).length();
    int virguluzunluk = fulluzunluk - tamuzunluk - 1;
    virgul = virgul * pow(10, virguluzunluk - 1);
    return ondanikiyev2(tam, virgul);
}

string onaltidansekizev2(string sayi, string ondalikli) {
    string deger = onaltidanonav2(sayi, ondalikli);
    double fullsayi = stod(deger);
    int tam = stoi(deger);
    double virgul = stod(deger) - stoi(deger);
    int fulluzunluk = deger.length();
    int tamuzunluk = to_string(tam).length();
    int virguluzunluk = fulluzunluk - tamuzunluk - 1;
    virgul = virgul * pow(10, virguluzunluk - 1);
    return ondansekizev2(tam, virgul);
}*/

/*string ikidensekizev3(int sayi, int ondalikli) {
    int ontam = 0, birlerbasamagi, tam[100], i, k = 0;
    double onvirgul = 0, yeniondalikli, virgulon[100];
    string deg1 = to_string(ondalikli);
    ostringstream os;
    yeniondalikli = ondalikli / pow(10, deg1.length());
    for (int j = 0; sayi > 0; j++) {
        birlerbasamagi = sayi % 10;
        sayi /= 10;
        ontam += birlerbasamagi * pow(2, j);
    }
    for (int j = -1 * deg1.length(); j <= 0; j++) {
        birlerbasamagi = ondalikli % 10;
        ondalikli /= 10;
        onvirgul += birlerbasamagi * pow(2, j);
    }
    double yenivurgul = onvirgul;
    while (true) {
        onvirgul *= 10;
        if (onvirgul == 0) {
            break;
        } else {
            virgulon[k] = (int)onvirgul;
            onvirgul -= (int)onvirgul;
            k++;
        }
    }
    for (i = 0; ontam > 0; i++) {
        tam[i] = ontam % 8;
        ontam /= 8;
    }
    for (i = i - 1; i >= 0; i--) {
        os << tam[i];
    }
    os << ".";
    while (true) {
        yenivurgul *= 8;
        if (fmod(yenivurgul, 1) == 0) {
            os << yenivurgul;
            break;
        } else {
            os << (int)yenivurgul;
            yenivurgul -= (int)yenivurgul;
        }
    }
    string son = os.str();
    return son;
}*/

// tamamiyle doğru çalışan fonksiyonlarımız
string ondanikiyev2(int sayi, string ondalikli) {
    int i, j, k, tam[100], birlerbasamagi;
    double virgul[100], degisken = 0, yeniondalikli, onvirgul;
    ostringstream os;
    for (i = 0; sayi > 0; i++) {
        tam[i] = sayi % 2;
        sayi /= 2;
    }
    if (sayi == 0) {
        os << "0";
    }
    for (i = i - 1; i >= 0; i--) {
        os << tam[i];
    }
    int virgulsayisi;
    char karakter;
    string deger = "";
    for (int a = 0; a < ondalikli.length(); a++) {
        virgul[a] = ondalikli.at(a);
    }
    for (int j = -1 * ondalikli.length(), a = 0; j <= 0 && a <= ondalikli.length() - 1; j++, a++) {
        karakter = static_cast<char>(virgul[a]);
        deger += karakter;
    }
    onvirgul = stod(deger) / pow(10, deger.length());
    os << ".";
    while (true) {
        onvirgul *= 2;
        if (fmod(onvirgul, 1) == 0) {
            os << "1";
            break;
        } else if ((int)onvirgul >= 1) {
            onvirgul--;
            os << "1";
        } else {
            os << "0";
        }
    }

    string son = os.str();
    return son;
}

string ondansekizev2(int sayi, string ondalikli) {
    int i, j, k, tam[100];
    double virgul[100], degisken = 0, onvirgul;
    ostringstream os;
    for (i = 0; sayi > 0; i++) {
        tam[i] = sayi % 8;
        sayi /= 8;
    }
    if (sayi == 0) {
        os << "0";
    }
    for (i = i - 1; i >= 0; i--) {
        os << tam[i];
    }
    int virgulsayisi;
    char karakter;
    string deger = "";
    for (int a = 0; a < ondalikli.length(); a++) {
        virgul[a] = ondalikli.at(a);
    }
    for (int j = -1 * ondalikli.length(), a = 0; j <= 0 && a <= ondalikli.length() - 1; j++, a++) {
        karakter = static_cast<char>(virgul[a]);
        deger += karakter;
    }
    onvirgul = stod(deger) / pow(10, deger.length());
    os << ".";
    while (true) {
        onvirgul *= 8;
        if (fmod(onvirgul, 1) == 0) {
            os << onvirgul;
            break;
        } else {
            os << (int)onvirgul;
            onvirgul -= (int)onvirgul;
        }
    }
    string son(os.str());
    return son;
}

string ondanonaltiyav2(int sayi, string ondalikli) {
    int i, sonuc[1000];
    double yeniondalikli, virgul[100], onvirgul;
    ostringstream os;
    for (i = 0; sayi > 0; i++) {
        sonuc[i] = sayi % 16;
        sayi /= 16;
    }
    if (sayi == 0) {
        os << "0";
    }
    for (i = i - 1; i >= 0; i--) {
        if (sonuc[i] == 15)
            os << "F";
        else if (sonuc[i] == 14)
            os << "E";
        else if (sonuc[i] == 13)
            os << "D";
        else if (sonuc[i] == 12)
            os << "C";
        else if (sonuc[i] == 11)
            os << "B";
        else if (sonuc[i] == 10)
            os << "A";
        else
            os << sonuc[i];
    }
    int virgulsayisi;
    char karakter;
    string deger = "";
    for (int a = 0; a < ondalikli.length(); a++) {
        virgul[a] = ondalikli.at(a);
    }
    for (int j = -1 * ondalikli.length(), a = 0; j <= 0 && a <= ondalikli.length() - 1; j++, a++) {
        karakter = static_cast<char>(virgul[a]);
        deger += karakter;
    }
    onvirgul = stod(deger) / pow(10, deger.length());
    os << ".";
    while (true) {
        onvirgul *= 16;
        if (fmod(onvirgul, 1) == 0) {
            if (onvirgul == 15)
                os << "F";
            else if (onvirgul == 14)
                os << "E";
            else if (onvirgul == 13)
                os << "D";
            else if (onvirgul == 12)
                os << "C";
            else if (onvirgul == 11)
                os << "B";
            else if (onvirgul == 10)
                os << "A";
            else
                os << (int)onvirgul;
            break;
        } else {
            if ((int)onvirgul == 15) {
                os << "F";
                onvirgul -= (int)onvirgul;
            } else if ((int)onvirgul == 14) {
                os << "E";
                onvirgul -= (int)onvirgul;
            } else if ((int)onvirgul == 13) {
                os << "D";
                onvirgul -= (int)onvirgul;
            } else if ((int)onvirgul == 12) {
                os << "C";
                onvirgul -= (int)onvirgul;
            } else if ((int)onvirgul == 11) {
                os << "B";
                onvirgul -= (int)onvirgul;
            } else if ((int)onvirgul == 10) {
                os << "A";
                onvirgul -= (int)onvirgul;
            } else {
                os << (int)onvirgul;
                onvirgul -= (int)onvirgul;
            }
        }
    }
    string son(os.str());
    return son;
}

string ikidensekizev4(int sayi, string ondalikli) {
    int ontam = 0, birlerbasamagi, tam[100], i, k = 0;
    double onvirgul = 0, yeniondalikli, virgulon[100];
    ostringstream os;
    yeniondalikli = stod(ondalikli) / pow(10, ondalikli.length());
    for (int j = 0; sayi > 0; j++) {
        birlerbasamagi = sayi % 10;
        sayi /= 10;
        ontam += birlerbasamagi * pow(2, j);
    }
    string degisken;
    int virgulsayisi;
    char karakter;
    for (int i = 0; i < ondalikli.length(); i++) {
        virgulon[i] = ondalikli.at(i);
    }
    for (int j = -1 * ondalikli.length(), i = ondalikli.length() - 1; j <= 0 && i >= 0; j++, i--) {
        karakter = static_cast<char>(virgulon[i]);
        virgulsayisi = karakter - '0';
        birlerbasamagi = virgulsayisi;
        onvirgul += birlerbasamagi * pow(2, j);
    }
    double yenivirgul = onvirgul;
    while (true) {
        onvirgul *= 10;
        if (onvirgul == 0) {
            break;
        } else {
            virgulon[k] = (int)onvirgul;
            onvirgul -= (int)onvirgul;
            k++;
        }
    }
    if (ontam == 0) {
        os << "0";
    }
    for (i = 0; ontam > 0; i++) {
        tam[i] = ontam % 8;
        ontam /= 8;
    }
    for (i = i - 1; i >= 0; i--) {
        os << tam[i];
    }
    os << ".";
    while (true) {
        yenivirgul *= 8;
        if (fmod(yenivirgul, 1) == 0) {
            os << yenivirgul;
            break;
        } else {
            os << (int)yenivirgul;
            yenivirgul -= (int)yenivirgul;
        }
    }

    string son = os.str();
    return son;
}

string ikidenonav2(long int sayi, string ondalikli) {
    int ontam = 0, birlerbasamagi, tam[100], i, k = 0;
    double onvirgul = 0, yeniondalikli, virgulon[100];
    ostringstream os;
    yeniondalikli = stod(ondalikli) / pow(10, ondalikli.length());
    for (int j = 0; sayi > 0; j++) {
        birlerbasamagi = sayi % 10;
        sayi /= 10;
        ontam += birlerbasamagi * pow(2, j);
    }
    string degisken;
    int virgulsayisi;
    char karakter;
    for (int a = 0; a < ondalikli.length(); a++) {
        virgulon[a] = ondalikli.at(a);
    }
    for (int j = -1 * ondalikli.length(), a = ondalikli.length() - 1; j <= 0 && a >= 0; j++, a--) {
        karakter = static_cast<char>(virgulon[a]);
        virgulsayisi = karakter - '0';
        birlerbasamagi = virgulsayisi;
        onvirgul += birlerbasamagi * pow(2, j);
    }
    os << ontam << ".";
    while (true) {
        onvirgul *= 10;
        if (onvirgul == 0) {
            break;
        } else {
            os << (int)onvirgul;
            onvirgul -= (int)onvirgul;
        }
    }

    string son(os.str());
    return son;
}

string ikidenonaltiyav3(int sayi, string ondalikli) {
    int ontam = 0, birlerbasamagi, tam[100], i, k = 0;
    double onvirgul = 0, yeniondalikli, virgulon[100];
    ostringstream os;
    yeniondalikli = stod(ondalikli) / pow(10, ondalikli.length());
    for (int j = 0; sayi > 0; j++) {
        birlerbasamagi = sayi % 10;
        sayi /= 10;
        ontam += birlerbasamagi * pow(2, j);
    }
    string degisken;
    int virgulsayisi;
    char karakter;
    for (int a = 0; a < ondalikli.length(); a++) {
        virgulon[a] = ondalikli.at(a);
    }
    for (int j = -1 * ondalikli.length(), a = ondalikli.length() - 1; j <= 0 && a >= 0; j++, a--) {
        karakter = static_cast<char>(virgulon[a]);
        virgulsayisi = karakter - '0';
        birlerbasamagi = virgulsayisi;
        onvirgul += birlerbasamagi * pow(2, j);
    }
    if (ontam == 0) {
        os << "0";
    }
    double yenivirgul = onvirgul;
    for (i = 0; ontam > 0; i++) {
        tam[i] = ontam % 16;
        ontam /= 16;
    }

    for (i = i - 1; i >= 0; i--) {
        if (tam[i] == 15)
            os << "F";
        else if (tam[i] == 14)
            os << "E";
        else if (tam[i] == 13)
            os << "D";
        else if (tam[i] == 12)
            os << "C";
        else if (tam[i] == 11)
            os << "B";
        else if (tam[i] == 10)
            os << "A";
        else
            os << tam[i];
    }
    os << ".";
    while (true) {
        yenivirgul *= 16;
        if (fmod(yenivirgul, 1) == 0) {
            if (yenivirgul == 15)
                os << "F";
            else if (yenivirgul == 14)
                os << "E";
            else if (yenivirgul == 13)
                os << "D";
            else if (yenivirgul == 12)
                os << "C";
            else if (yenivirgul == 11)
                os << "B";
            else if (yenivirgul == 10)
                os << "A";
            else
                os << (int)yenivirgul;
            break;
        } else {
            if ((int)yenivirgul == 15) {
                os << "F";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 14) {
                os << "E";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 13) {
                os << "D";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 12) {
                os << "C";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 11) {
                os << "B";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 10) {
                os << "A";
                yenivirgul -= (int)yenivirgul;
            } else {
                os << (int)yenivirgul;
                yenivirgul -= (int)yenivirgul;
            }
        }
    }
    string son(os.str());
    return son;
}

string sekizdenikiyev3(int sayi, string ondalikli) {
    int ontam = 0, birlerbasamagi, tam[100], i, k = 0;
    double onvirgul = 0, yeniondalikli, virgulon[100];
    ostringstream os;
    yeniondalikli = stod(ondalikli) / pow(10, ondalikli.length());
    for (int j = 0; sayi > 0; j++) {
        birlerbasamagi = sayi % 10;
        sayi /= 10;
        ontam += birlerbasamagi * pow(8, j);
    }
    string degisken;
    int virgulsayisi;
    char karakter;
    for (int i = 0; i < ondalikli.length(); i++) {
        virgulon[i] = ondalikli.at(i);
    }
    for (int j = -1 * ondalikli.length(), i = ondalikli.length() - 1; j <= 0 && i >= 0; j++, i--) {
        karakter = static_cast<char>(virgulon[i]);
        virgulsayisi = karakter - '0';
        birlerbasamagi = virgulsayisi;
        onvirgul += birlerbasamagi * pow(8, j);
    }
    double yenivirgul = onvirgul;
    while (true) {
        onvirgul *= 10;
        if (onvirgul == 0) {
            break;
        } else {
            virgulon[k] = (int)onvirgul;
            onvirgul -= (int)onvirgul;
            k++;
        }
    }
    if (ontam == 0) {
        os << "0";
    }
    for (i = 0; ontam > 0; i++) {
        tam[i] = ontam % 2;
        ontam /= 2;
    }

    for (i = i - 1; i >= 0; i--) {
        os << tam[i];
    }
    os << ".";
    while (true) {
        yenivirgul *= 2;
        if (fmod(yenivirgul, 1) == 0) {
            os << "1";
            break;
        } else if ((int)yenivirgul >= 1) {
            yenivirgul--;
            os << "1";
        } else {
            os << "0";
        }
    }
    string son = os.str();
    return son;
}

string sekizdenonav2(int sayi, string ondalikli) {
    int birlerbasamagi, sonuc = 0, i, j, k;
    double sonuc2 = 0, virguldizi[100];
    ostringstream os;
    for (i = 0; sayi > 0; i++) {
        birlerbasamagi = sayi % 10;
        sayi /= 10;
        sonuc += (birlerbasamagi * pow(8, i));
    }
    int virgulsayisi;
    char karakter;
    for (int a = 0; a < ondalikli.length(); a++) {
        virguldizi[a] = ondalikli.at(a);
    }
    for (int j = -1 * ondalikli.length(), a = ondalikli.length() - 1; j <= 0 && a >= 0; j++, a--) {
        karakter = static_cast<char>(virguldizi[a]);
        virgulsayisi = karakter - '0';
        birlerbasamagi = virgulsayisi;
        sonuc2 += birlerbasamagi * pow(8, j);
    }
    os << sonuc << ".";
    while (true) {
        sonuc2 *= 10;
        if (sonuc2 == 0) {
            break;
        } else {
            os << (int)sonuc2;
            sonuc2 -= (int)sonuc2;
        }
    }
    string son = os.str();
    return son;
}

string sekizdenonaltiyav3(int sayi, string ondalikli) {
    int ontam = 0, birlerbasamagi, tam[100], i, k = 0;
    double onvirgul = 0, yeniondalikli, virgulon[100];
    ostringstream os;
    yeniondalikli = stod(ondalikli) / pow(10, ondalikli.length());
    for (int j = 0; sayi > 0; j++) {
        birlerbasamagi = sayi % 10;
        sayi /= 10;
        ontam += birlerbasamagi * pow(8, j);
    }
    string degisken;
    int virgulsayisi;
    char karakter;
    for (int i = 0; i < ondalikli.length(); i++) {
        virgulon[i] = ondalikli.at(i);
    }
    for (int j = -1 * ondalikli.length(), i = ondalikli.length() - 1; j <= 0 && i >= 0; j++, i--) {
        karakter = static_cast<char>(virgulon[i]);
        virgulsayisi = karakter - '0';
        birlerbasamagi = virgulsayisi;
        onvirgul += birlerbasamagi * pow(8, j);
    }
    double yenivirgul = onvirgul;
    if (ontam == 0) {
        os << "0";
    }
    for (i = 0; ontam > 0; i++) {
        tam[i] = ontam % 16;
        ontam /= 16;
    }

    for (i = i - 1; i >= 0; i--) {
        if (tam[i] == 15)
            os << "F";
        else if (tam[i] == 14)
            os << "E";
        else if (tam[i] == 13)
            os << "D";
        else if (tam[i] == 12)
            os << "C";
        else if (tam[i] == 11)
            os << "B";
        else if (tam[i] == 10)
            os << "A";
        else
            os << tam[i];
    }
    os << ".";
    while (true) {
        yenivirgul *= 16;
        if (fmod(yenivirgul, 1) == 0) {
            if (yenivirgul == 15)
                os << "F";
            else if (yenivirgul == 14)
                os << "E";
            else if (yenivirgul == 13)
                os << "D";
            else if (yenivirgul == 12)
                os << "C";
            else if (yenivirgul == 11)
                os << "B";
            else if (yenivirgul == 10)
                os << "A";
            else
                os << (int)yenivirgul;
            break;
        } else {
            if ((int)yenivirgul == 15) {
                os << "F";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 14) {
                os << "E";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 13) {
                os << "D";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 12) {
                os << "C";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 11) {
                os << "B";
                yenivirgul -= (int)yenivirgul;
            } else if ((int)yenivirgul == 10) {
                os << "A";
                yenivirgul -= (int)yenivirgul;
            } else {
                os << (int)yenivirgul;
                yenivirgul -= (int)yenivirgul;
            }
        }
    }
    string son = os.str();
    return son;
}

string onaltidanikiyev3(string sayi, string ondalikli) {
    int ontam = 0, birlerbasamagi, tam[100], i, k = 0, tamon[100], virgulon[100], gecici;
    double onvirgul = 0, yeniondalikli;
    ostringstream os;
    int virgulsayisi, tamsayisi;
    char karakter;
    for (int i = 0; i < ondalikli.length(); i++) {
        if (ondalikli.at(i) == 'A') {
            virgulon[i] = 10;
        } else if (ondalikli.at(i) == 'B') {
            virgulon[i] = 11;
        } else if (ondalikli.at(i) == 'C') {
            virgulon[i] = 12;
        } else if (ondalikli.at(i) == 'D') {
            virgulon[i] = 13;
        } else if (ondalikli.at(i) == 'E') {
            virgulon[i] = 14;
        } else if (ondalikli.at(i) == 'F') {
            virgulon[i] = 15;
        } else {
            karakter = static_cast<char>(ondalikli.at(i));
            gecici = karakter - '0';
            virgulon[i] = gecici;
        }
    }
    for (int i = 0; i < sayi.length(); i++) {
        if (sayi.at(i) == 'A') {
            tamon[i] = 10;
        } else if (sayi.at(i) == 'B') {
            tamon[i] = 11;
        } else if (sayi.at(i) == 'C') {
            tamon[i] = 12;
        } else if (sayi.at(i) == 'D') {
            tamon[i] = 13;
        } else if (sayi.at(i) == 'E') {
            tamon[i] = 14;
        } else if (sayi.at(i) == 'F') {
            tamon[i] = 15;
        } else {
            karakter = static_cast<char>(sayi.at(i));
            gecici = karakter - '0';
            tamon[i] = gecici;
        }
    }
    for (int j = 0, i = sayi.length() - 1; i >= 0; j++, i--) {
        ontam += tamon[i] * pow(16, j);
    }

    for (int j = -1 * ondalikli.length(), i = ondalikli.length() - 1; j <= 0 && i >= 0; j++, i--) {
        onvirgul += virgulon[i] * pow(16, j);
    }
    double yenivirgul = onvirgul;
    if (ontam == 0) {
        os << "0";
    }
    for (i = 0; ontam > 0; i++) {
        tam[i] = ontam % 2;
        ontam /= 2;
    }

    for (i = i - 1; i >= 0; i--) {
        os << tam[i];
    }
    os << ".";
    while (true) {
        yenivirgul *= 2;
        if (fmod(yenivirgul, 1) == 0) {
            os << "1";
            break;
        } else if ((int)yenivirgul >= 1) {
            yenivirgul--;
            os << "1";
        } else {
            os << "0";
        }
    }

    string son = os.str();
    return son;
}

string onaltidansekizev3(string sayi, string ondalikli) {
    int ontam = 0, birlerbasamagi, tam[100], i, k = 0, tamon[100], virgulon[100], gecici;
    double onvirgul = 0, yeniondalikli;
    ostringstream os;
    int virgulsayisi, tamsayisi;
    char karakter;
    for (int i = 0; i < ondalikli.length(); i++) {
        if (ondalikli.at(i) == 'A') {
            virgulon[i] = 10;
        } else if (ondalikli.at(i) == 'B') {
            virgulon[i] = 11;
        } else if (ondalikli.at(i) == 'C') {
            virgulon[i] = 12;
        } else if (ondalikli.at(i) == 'D') {
            virgulon[i] = 13;
        } else if (ondalikli.at(i) == 'E') {
            virgulon[i] = 14;
        } else if (ondalikli.at(i) == 'F') {
            virgulon[i] = 15;
        } else {
            karakter = static_cast<char>(ondalikli.at(i));
            gecici = karakter - '0';
            virgulon[i] = gecici;
        }
    }
    for (int i = 0; i < sayi.length(); i++) {
        if (sayi.at(i) == 'A') {
            tamon[i] = 10;
        } else if (sayi.at(i) == 'B') {
            tamon[i] = 11;
        } else if (sayi.at(i) == 'C') {
            tamon[i] = 12;
        } else if (sayi.at(i) == 'D') {
            tamon[i] = 13;
        } else if (sayi.at(i) == 'E') {
            tamon[i] = 14;
        } else if (sayi.at(i) == 'F') {
            tamon[i] = 15;
        } else {
            karakter = static_cast<char>(sayi.at(i));
            gecici = karakter - '0';
            tamon[i] = gecici;
        }
    }
    for (int j = 0, i = sayi.length() - 1; i >= 0; j++, i--) {
        ontam += tamon[i] * pow(16, j);
    }

    for (int j = -1 * ondalikli.length(), i = ondalikli.length() - 1; j <= 0 && i >= 0; j++, i--) {
        onvirgul += virgulon[i] * pow(16, j);
    }
    double yenivirgul = onvirgul;
    if (ontam == 0) {
        os << "0";
    }
    for (i = 0; ontam > 0; i++) {
        tam[i] = ontam % 8;
        ontam /= 8;
    }

    for (i = i - 1; i >= 0; i--) {
        os << tam[i];
    }
    os << ".";
    while (true) {
        yenivirgul *= 8;
        if (fmod(yenivirgul, 1) == 0) {
            os << yenivirgul;
            break;
        } else {
            os << (int)yenivirgul;
            yenivirgul -= (int)yenivirgul;
        }
    }
    string son = os.str();
    return son;
}

string onaltidanonav3(string sayi, string ondalikli) {
    int ontam = 0, birlerbasamagi, tam[100], i, k = 0, tamon[100], virgulon[100], gecici;
    double onvirgul = 0, yeniondalikli;
    ostringstream os;
    int virgulsayisi, tamsayisi;
    char karakter;
    for (int i = 0; i < ondalikli.length(); i++) {
        if (ondalikli.at(i) == 'A') {
            virgulon[i] = 10;
        } else if (ondalikli.at(i) == 'B') {
            virgulon[i] = 11;
        } else if (ondalikli.at(i) == 'C') {
            virgulon[i] = 12;
        } else if (ondalikli.at(i) == 'D') {
            virgulon[i] = 13;
        } else if (ondalikli.at(i) == 'E') {
            virgulon[i] = 14;
        } else if (ondalikli.at(i) == 'F') {
            virgulon[i] = 15;
        } else {
            karakter = static_cast<char>(ondalikli.at(i));
            gecici = karakter - '0';
            virgulon[i] = gecici;
        }
    }
    long double yenidizi[100];
    for (int i = 0; i < sayi.length(); i++) {
        if (sayi.at(i) == 'A') {
            tamon[i] = 10;
        } else if (sayi.at(i) == 'B') {
            tamon[i] = 11;
        } else if (sayi.at(i) == 'C') {
            tamon[i] = 12;
        } else if (sayi.at(i) == 'D') {
            tamon[i] = 13;
        } else if (sayi.at(i) == 'E') {
            tamon[i] = 14;
        } else if (sayi.at(i) == 'F') {
            tamon[i] = 15;
        } else {
            karakter = static_cast<char>(sayi.at(i));
            gecici = karakter - '0';
            tamon[i] = gecici;
        }
    }
    for (int j = 0, i = sayi.length() - 1; i >= 0; j++, i--) {
        ontam += tamon[i] * pow(16, j);
    }
    for (int j = -1 * ondalikli.length(), i = ondalikli.length() - 1; j <= 0 && i >= 0; j++, i--) {
        onvirgul += virgulon[i] * pow(16, j);
    }
    os << fixed << setprecision(9) << (ontam + onvirgul);
    string son(os.str());
    return son;
}

int main() {
    
    int taban, tam;
    string sayi, ondalikli;
a:
    cout << "1 - Onluk\n2 - İkilik\n3 - Sekizlik\n4 - Onaltılık\nHangi tabanda sayı gireceksiniz? : ";
    cin >> taban;
    switch (taban) {
        case 1:
            cout << "Sayınızı giriniz: ";
            cin >> sayi;
            tam = stoi(sayi.substr(0, sayi.find('.')));   // girilen string değişkeninin '.' karakterinden önceki kalan kısmı almak ve tam sayıya çevirmek
            ondalikli = sayi.substr(sayi.find('.') + 1);  // girilen string değişkeninin '.' karakterinden sonraki kalan kısmı almak string olarak almak
            cout << "İkilik Hali -> " << ondanikiyev2(tam, ondalikli) << endl;
            cout << "Sekizlik Hali -> " << ondansekizev2(tam, ondalikli) << endl;
            cout << "Onaltılık Hali -> " << ondanonaltiyav2(tam, ondalikli) << endl;
            break;
        case 2:
            cout << "Sayınızı giriniz: ";
            cin >> sayi;
            tam = stoi(sayi.substr(0, sayi.find('.')));   // girilen string değişkeninin '.' karakterinden önceki kalan kısmı almak ve tam sayıya çevirmek
            ondalikli = sayi.substr(sayi.find('.') + 1);  // girilen string değişkeninin '.' karakterinden sonraki kalan kısmı almak string olarak almak
            cout << "Sekizlik Hali -> " << ikidensekizev4(tam, ondalikli) << endl;
            cout << "Onluk Hali -> " << ikidenonav2(tam, ondalikli) << endl;
            cout << "Onaltılık Hali -> " << ikidenonaltiyav3(tam, ondalikli) << endl;
            break;
        case 3:
            cout << "Sayınızı giriniz: ";
            cin >> sayi;
            tam = stoi(sayi.substr(0, sayi.find('.')));   // girilen string değişkeninin '.' karakterinden önceki kalan kısmı almak ve tam sayıya çevirmek
            ondalikli = sayi.substr(sayi.find('.') + 1);  // girilen string değişkeninin '.' karakterinden sonraki kalan kısmı almak string olarak almak
            cout << "İkilik Hali -> " << sekizdenikiyev3(tam, ondalikli) << endl;
            cout << "Onluk Hali -> " << sekizdenonav2(tam, ondalikli) << endl;
            cout << "Onaltılık Hali -> " << sekizdenonaltiyav3(tam, ondalikli) << endl;
            break;
        case 4:
            cout << "Sayınızı giriniz: ";
            cin >> sayi;
            cout << "İkilik Hali -> " << onaltidanikiyev3(sayi.substr(0, sayi.find('.')), sayi.substr(sayi.find('.') + 1)) << endl;     // 16'lık sayı sisteminde harfler de olduğundan abcdef karakterlerini de alacağımız için string inputu alıyoruz fonksiyonda
            cout << "Sekizlik Hali -> " << onaltidansekizev3(sayi.substr(0, sayi.find('.')), sayi.substr(sayi.find('.') + 1)) << endl;  // bu yüzden bunu tam sayı değişkenine tam sayıya çevirmeden '.' dan önceki ve sonraki kısmı direkt fonksiyona sokuyoruz
            cout << "Onluk Hali -> " << onaltidanonav3(sayi.substr(0, sayi.find('.')), sayi.substr(sayi.find('.') + 1)) << endl;
            break;
        default:
            cout << "Yanlış seçim tekrar deneyiniz..." << endl;
            goto a;  // goto yapısı kullanarak case'in dışına çıktığında taban seçimini yeniden yaptırıyoruz
            break;
    }
}
