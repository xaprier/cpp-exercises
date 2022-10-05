#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to display the multiplication
	* table vertically from 1 to n
	*/
	int num;
	cout << "Enter a num: ";
	cin >> num;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= num; j++) {
			if (j == num) { // if-else statement is for not to place "," end of the line
				cout << j << "x" << i << "=" << i * j;
			} else {
				cout << j << "x" << i << "=" << i * j << ", ";
			}
		}
		cout << endl;
	}
}
