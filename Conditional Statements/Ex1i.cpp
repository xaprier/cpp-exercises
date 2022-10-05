#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to read any digit, display in word.
	*/
	int num;
	cout << "Enter a num: ";
	cin >> num;
	switch (num) {
		case 0:
			cout << "Zero\n";
			break;
		case 1:
			cout << "One\n";
			break;
		case 2:
			cout << "Two\n";
			break;
		case 3:
			cout << "Three\n";
			break;
		case 4:
			cout << "Four\n";
			break;
		case 5:
			cout << "Five\n";
			break;
		case 6:
			cout << "Six\n";
			break;
		case 7:
			cout << "Seven\n";
			break;
		case 8:
			cout << "Eight\n";
			break;
		case 9:
			cout << "Nine\n";
			break;
		default:
			cout << "Invalid digit.\n";
			break;
	}
}
