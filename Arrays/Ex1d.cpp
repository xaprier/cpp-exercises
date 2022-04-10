#include <iostream>

using namespace std;

int main() {
    /*
    * Write a program in C++ to copy the elements of one array
    * into another array.
    */
    int n;
    cout << "Input the number of elements to be stored in the array: ";
    cin >> n;
    int arr[n], arr2[n];
    cout << "Input " << n << " elements in the array;\n";

    for (int i = 0; i < n; i++) {
        cout << "element - " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "The elements sotred in the first array are : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }

    cout << "The elements copied into the second array are : ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    cout << endl;
} 