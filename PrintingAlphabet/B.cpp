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
		for (int d = 1; d <= number; d++) {
			if (d == 1 || d == (number / 2) + 1 || d == number) {
				for (int d = 1; d <= number; d++) {
					cout << "B ";
				}
			} else {
				for (int d1 = 1; d1 <= 2 * number - 1; d1++) {
					if (d1 == 1 || d1 == 2 * number - 1) {
						cout << "B";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
