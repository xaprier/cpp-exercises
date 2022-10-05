#include <iostream>

using namespace std;

int main() {
	a:
	// We want an odd number because some letters are drawn proportionally only when they are odd numbers.
	cout << "Enter an odd number which 5 or higher value: ";

	int number; // input the length of alphabet from user
	cin >> number;

	int whiteSpace1 = 0;
	int whiteSpace2 = 2 * number - 2 - 2 * whiteSpace1;

	if (number <= 4 || number % 2 == 0) { // if the number includes the conditions of program or not?
		cout << "You must enter an odd number which 5 or higher value." << endl;
		goto a;
	} else {
		for (int x = 1; x <= number; x++) {
			if (x <= number / 2) {
				for (int x1 = 1; x1 <= whiteSpace1; x1++) {
					cout << " ";
				}
				cout << "X";
				for (int x2 = 1; x2 <= whiteSpace2; x2++) {
					cout << " ";
				}
				cout << "X";
				whiteSpace1 += 2;
				whiteSpace2 = 2 * number - 2 - 2 * whiteSpace1;
			} else if (x == number / 2 + 1) {
				for (int x3 = 1; x3 <= whiteSpace1; x3++) {
					cout << " ";
				}
				cout << "XX";
				whiteSpace1 -= 2;
				whiteSpace2 = 2 * number - 2 - 2 * whiteSpace1;
			} else {
				for (int x4 = 1; x4 <= whiteSpace1; x4++) {
					cout << " ";
				}
				cout << "X";
				for (int x5 = 1; x5 <= whiteSpace2; x5++) {
					cout << " ";
				}
				cout << "X";
				whiteSpace1 -= 2;
				whiteSpace2 = 2 * number - 2 - 2 * whiteSpace1;
			}
			cout << endl;
		}
	}
}
