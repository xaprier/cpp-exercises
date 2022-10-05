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
		for (int f = 1; f <= number; f++) {
			if (f == 1 || f == (number / 2) + 1) {
				for (int f1 = 1; f1 <= number; f1++) {
					cout << "F ";
				}
			} else {
				for (int f2 = 1; f2 <= 2 * number - 1; f2++) {
					if (f2 == 1) {
						cout << "F";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
