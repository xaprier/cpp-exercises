#include <iostream>

using namespace std;

int main() {
    /*
    * Write a C++ program to find whether a given
    * year is a leap year or not.
    */
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (year % 400 == 0) 
        cout << year << " is a leap year." << endl;
    else if (year % 100 == 0) 
        cout << year << " is not a leap year." << endl;
    else if (year % 4 == 0) 
        cout << year << " is a leap year." << endl;
    else 
        cout << year << " is not a leap year." << endl;
    
}