#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to count a total number
	* of duplicate elements in an array.
	*/
	cout << "Input the number of elements to be stored in the array: ";
	int n;
	cin >> n;
	int arr[n];
	cout << "Input " << n << " elements in the array;\n";
	int counter, ctr2 = 0;


	for (int i = 0; i < n; i++) {
		cout << "element - " << i + 1 << " : ";
		cin >> arr[ i ];
	}

	for (int i = 0; i < n; i++) {
		counter = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[ i ] == arr[ j ]) {
				counter++;
				arr[ j ] = -1;
			}
		}
		if (arr[ i ] != -1 && counter >= 2) {
			ctr2 += 1;
		}
	}
	cout << "Total number of duplicate elements found in the array is : " << ctr2 << endl;
}
