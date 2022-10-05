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
		for (int h = 1; h <= number; h++) {
			if (h == (number / 2) + 1) {
				for (int h1 = 1; h1 <= 2 * number; h1++) {
					cout << "H";
				}
			} else {
				for (int h2 = 1; h2 <= 2 * number - 1; h2++) {
					if (h2 == 1 || h2 == 2 * number - 1) {
						cout << "H";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
