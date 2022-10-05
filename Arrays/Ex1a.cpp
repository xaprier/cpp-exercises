#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to store elements and print it.
	*/
	cout << "Input 10 elements in the array;\n";
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "element - " << i + 1 << " : ";
		cin >> arr[ i ];
	}
	cout << "Elements in array are : ";
	for (int i = 0; i < 10; i++) {
		cout << arr[ i ] << " ";
	}
	cout << endl;
}
