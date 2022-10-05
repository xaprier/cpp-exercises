#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to display of n in length
	* of a right triangle. Pattern like:
	* 1
	* 12
	* 123
	* 1234
	* 12345
	*/
	cout << "Enter a num: ";
	int n;
	cin >> n;
	cout << "The Pattern is: " << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}
}
