#include <iostream>

using namespace std;

int main() {
	/*
	* Write a C++ program to check whether
	* a given number is even or odd.
	*/
	cout << "Enter a num: ";
	int num;
	cin >> num;
	if (num % 2 == 0)
		cout << num << " is an even integer." << endl;
	else
		cout << num << " is an odd integer." << endl;
}
