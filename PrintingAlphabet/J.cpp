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
		for (int j = 1; j <= number; j++) {
			if (j == number) {
				for (int j1 = 1; j1 <= number - 2; j1++) {
					cout << " J";
				}
			} else if (j == number - 1) {
				cout << "J";
				for (int j2 = 1; j2 <= 2 * number - 4; j2++) {
					cout << " ";
				}
				cout << "J";
			} else if (j == number - 2) {
				cout << "J";
				for (int j3 = 1; j3 <= 2 * number - 2; j3++) {
					cout << " ";
				}
				cout << "J";
			} else {
				for (int j4 = 1; j4 <= 2 * number; j4++) {
					if (j4 == 2 * number) {
						cout << "J";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
