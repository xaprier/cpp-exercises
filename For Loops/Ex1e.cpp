#include <iostream>

using namespace std;

int main() {
    /*
    * Write a program in C++ to display the cube of the number
    * upto given an integer.
    */
    cout << "Enter a num: ";
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        cout << "Number is: " << i << " and cube of the " << i << " is: " << i*i*i << endl;
    }
}