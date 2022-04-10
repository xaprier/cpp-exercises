#include <iostream>

using namespace std;

int main() {
    /*
    * Write a program in C++ to display the n terms
    * of odd natural number and their sum
    */
    int sum_of_numbers = 0, num, tempnum;
    cout << "Enter a num: ";
    cin >> num;
    tempnum = num;
    cout << "The odd numbers are : ";
    for (int i = 1; true; i++) {
        if (num == 0) {
            break;
        } else if (i % 2 == 1) {
            cout << i << " ";
            sum_of_numbers += i;
            num--;
        }
    }
    cout << "\nThe sum of odd natural number upto " << tempnum << " terms: " << sum_of_numbers << endl;
}