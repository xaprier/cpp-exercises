#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to display with n rows
	* of a right triangle. Pattern like:
	* 1
	* 2 3
	* 4 5 6
	* 7 8 9 10
	*/
	int point = 1, num;
	cout << "Enter a num: ";
	cin >> num;
	cout << "The Pattern is: " << endl;
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++, point++) {
			cout << point << " ";
		}
		cout << endl;
	}
}
