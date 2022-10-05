#include <iostream>

using namespace std;

int main() {
	a:
	// We want an odd number because some letters are drawn proportionally only when they are odd numbers.
	cout << "Enter an odd number which 5 or higher value: ";

	int number; // input the length of alphabet from user
	cin >> number;
	int whiteSpace1 = 2 * number - 2;
	if (number <= 4 || number % 2 == 0) { // if the number includes the conditions of program or not?
		cout << "You must enter an odd number which 5 or higher value." << endl;
		goto a;
	} else {
		for (int k = 1; k <= number; k++) {
			if (k <= number / 2) {
				cout << "K";
				for (int k1 = 1; k1 <= whiteSpace1; k1++) {
					cout << " ";
				}
				cout << "K";
				whiteSpace1 -= 3;
			} else if (k == number / 2 + 1) {
				for (int k2 = 1; k2 <= whiteSpace1; k2++) {
					cout << "K ";
				}
				whiteSpace1 += 3;
			} else {
				cout << "K";
				for (int k3 = 1; k3 <= whiteSpace1; k3++) {
					cout << " ";
				}
				cout << "K";
				whiteSpace1 += 3;
			}
			cout << endl;
		}
	}
}
