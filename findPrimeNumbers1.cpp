#include <iostream>
using namespace std;

int main() {
    //Yorum satırı eklenecek

    cout << "Enter limit: ";
    int number;
    cin >> number;
    int divnum;
    int primenum = 0;
  
    cout << "The prime numbers are: ";
    for (int i = 2; i <= number; i++) {
        divnum = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                divnum++;
                break;
            }
        }
        if (divnum == 0) {
            cout << i << " ";
            primenum++;
        }
    }
    cout << endl;
    cout << "There is total " << primenum << " prime numbers between 1 and " << number << endl;

    return 0;
}