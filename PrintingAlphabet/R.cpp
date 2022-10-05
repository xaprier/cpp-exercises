#include <iostream>

using namespace std;

int main() {
	a:
	// We want an odd number because some letters are drawn proportionally only when they are odd numbers.
	cout << "Enter an odd number which 5 or higher value: ";

	int number; // input the length of alphabet from user
	cin >> number;

	int extraWhiteSpace = 0;

	if (number <= 4 || number % 2 == 0) { // if the number includes the conditions of program or not?
		cout << "You must enter an odd number which 5 or higher value." << endl;
		goto a;
	} else {
		for (int r = 1; r <= number; r++) {
			if (r == 1 || r == (number / 2) + 1) {
				for (int r1 = 1; r1 <= number; r1++) {
					cout << "R ";
				}
			} else if (r <= number / 2) {
				cout << "R";
				for (int r2 = 1; r2 <= 2 * number - 2; r2++) {
					cout << " ";
				}
				cout << "R";
			} else {
				cout << "R";
				for (int r3 = 1; r3 <= number - 2 + extraWhiteSpace; r3++) {
					cout << " ";
				}
				cout << "R";
				extraWhiteSpace += 2;
			}
			cout << endl;
		}
	}
}
