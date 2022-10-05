#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to display with n rows
	* of a right triangle. Pattern like:
	*    *
	*   * *
	*  * * *
	* * * * *
	*/
	int num, space;
	cout << "Enter a num: ";
	cin >> num;
	space = num + 4 - 1;
	for (int i = 1; i <= num; i++, space--) {
		for (int j = space; j >= 1; j--) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}

}
