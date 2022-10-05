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
		for (int c = 1; c <= number; c++) {
			if (c == 1 || c == number) {
				for (int c1 = 1; c1 <= number; c1++) {
					cout << " C";
				}
			} else {
				for (int c2 = 1; c2 <= 2 * number; c2++) {
					if (c2 == 1) {
						cout << "C";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
