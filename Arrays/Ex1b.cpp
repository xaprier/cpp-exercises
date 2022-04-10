#include <iostream>

using namespace std;

int main() {
    /*
    * Write a program in C++ to read n number of values in
    * an array and display it in reverse order.
    */
    cout << "Input the number of elements to store in the array: ";
    int n;
    cin >> n;
    // int arr[n];//don't recommended;
    int *arr = new int[n];
    
    cout << "Input " << n << " number of elements in the array;\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i + 1 << " : ";
        cin >> arr[i];
    }

    int size;
    cout << "The values store into the array are : ";
    for (size = 0; size < n; size++) {
        cout << arr[size] << " ";
    }

    cout << "\nThe values store into the array in reverse are : ";
    for (size = size-1; size >= 0; size--) {
        cout << arr[size] << " ";
    }
    cout << endl;
}