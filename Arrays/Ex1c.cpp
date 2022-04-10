#include <iostream>

using namespace std;

int main() {
    /*
    * Write a program in C++ to find the sum
    * of all elements of the array
    */
    cout << "Input the number of elements to be stored in the array: ";
    int n, sum_of_arr = 0;
    cin >> n;
    cout << "Input " << n << " elements in the array;\n";
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "element - " << i + 1 << " : ";
        cin >> arr[i];
        sum_of_arr += arr[i];
    }
    cout << "Sum of all elements stored in the array is : " << sum_of_arr << endl;
}