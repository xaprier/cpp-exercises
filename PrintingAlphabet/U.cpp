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
		for (int u = 1; u <= number; u++) {
			if (u == number) {
				cout << " ";
				for (int u1 = 1; u1 <= 2 * number - 2; u1++) {
					cout << "U";
				}
			} else {
				for (int u2 = 1; u2 <= 2 * number - 1; u2++) {
					if (u2 == 1 || u2 == 2 * number - 1) {
						cout << "U";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
