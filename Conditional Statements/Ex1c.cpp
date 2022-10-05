#include <iostream>

using namespace std;

int main() {
	/*
	* Write a C++ program to check wheter a given
	* number is positive or negative.
	*/
	int num;
	cout << "Enter a num: ";
	cin >> num;
	if (num < 0)
		cout << num << " is a negative integer." << endl;
	else
		cout << num << " is a positive integer." << endl;
}
