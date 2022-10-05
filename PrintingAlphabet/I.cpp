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
		for (int i = 1; i <= number; i++) {
			if (i == number || i == 1) {
				for (int i1 = 1; i1 <= number / 2; i1++) {
					cout << " ";
				}
				for (int i2 = 1; i2 <= number; i2++) {
					cout << "I";
				}
			} else {
				for (int i1 = 1; i1 <= number - 1; i1++) {
					cout << " ";
				}
				cout << "I";
			}
			cout << endl;
		}
	}
}
