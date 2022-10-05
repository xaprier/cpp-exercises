#include <iostream>

using namespace std;

int main() {
	/*
	* Write a C++ program to find the largest
	* of three numbers.
	*/
	int num1, num2, num3;
	cout << "Enter num1, num2, num3: " << endl;
	cin >> num1 >> num2 >> num3;
	if (num1 > num2) {
		if (num1 > num3) {
			cout << "The largest number is 1st." << endl;
		} else {
			cout << "The largest number is 3rd." << endl;
		}
	} else if (num2 > num3) {
		cout << "The largest number is 2nd." << endl;
	} else
		cout << "The largest number is 3rd." << endl;
}
