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
		for (int l = 1; l <= number; l++) {
			if (l == number) {
				for (int l1 = 1; l1 <= number; l1++) {
					cout << "L ";
				}
			} else {
				for (int l2 = 1; l2 <= 2 * number; l2++) {
					if (l2 == 1) {
						cout << "L";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
