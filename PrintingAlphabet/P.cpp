#include <iostream>

using namespace std;

int main() {
	a:
	// We want an odd number because some letters are drawn proportionally only when they are odd numbers.
	cout << "Enter an odd number which 5 or higher value: ";

	int number; // input the length of alphabet from user
	cin >> number;

	if (number <= 4 || number % 2 == 0) { // if the number includes the conditions of program or not?
		cout << "You must enter an odd number which 5 or higher value." << endl;
		goto a;
	} else {
		for (int p = 1; p <= number; p++) {
			if (p == 1) {
				cout << "P";
				for (int p3 = 1; p3 <= number - 1; p3++) {
					cout << " P";
				}
			} else if (p <= number / 2) {
				cout << "P";
				for (int p2 = 1; p2 <= 2 * number - 2; p2++) {
					cout << " ";
				}
				cout << "P";
			} else if (p == number / 2 + 1) {
				cout << "P";
				for (int p3 = 1; p3 <= number - 1; p3++) {
					cout << " P";
				}
			} else {
				cout << "P";
			}
			cout << endl;
		}
	}
}
