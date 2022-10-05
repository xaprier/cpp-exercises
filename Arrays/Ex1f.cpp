#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to print all unique
	* elements in an array.
	*/

	cout << "Input the number of elements to be stored in the array: ";
	int n;
	cin >> n;
	int arr[n];
	cout << "Input " << n << " elements in the array;\n";
	int control[n];

	for (int i = 0; i < n; i++) {
		cout << "element - " << i + 1 << " : ";
		cin >> arr[ i ];
		control[ i ] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[ i ] == arr[ j ]) {
				control[ i ]++;
				arr[ j ] = -99999999;
			}
		}
	}

	cout << "The unique elements found in the array are: ";
	for (int i = 0; i < n; i++) {
		if (control[ i ] == 1 && arr[ i ] != -99999999) {
			cout << arr[ i ] << " ";
		}
	}
	cout << endl;

}
