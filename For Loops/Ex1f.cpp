#include <iostream>

using namespace std;

int main() {
    /*
    * Write a program in C++ to display the multiplication
    * table of a given integer.
    */
    cout << "Enter a num: ";
    int num;
    cin >> num;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}