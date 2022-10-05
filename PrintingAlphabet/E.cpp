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
		for (int e = 1; e <= number; e++) {
			if (e == 1 || e == number || e == (number / 2) + 1) {
				for (int e1 = 1; e1 <= number; e1++) {
					cout << "E ";
				}
			} else {
				for (int e2 = 1; e2 <= 2 * number - 1; e2++) {
					if (e2 == 1) {
						cout << "E";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
