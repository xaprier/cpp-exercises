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
		for (int o = 1; o <= number; o++) {
			if (o == 1) {
				cout << "  ";
				for (int o1 = 1; o1 < 2 * number - 4; o1++) {
					cout << "O";
				}
			} else if (o == 2) {
				cout << " O";
				for (int o2 = 1; o2 <= 2 * number - 4; o2++) {
					cout << " ";
				}
			} else if (o == number) {
				cout << "  ";
				for (int o1 = 1; o1 < 2 * number - 4; o1++) {
					cout << "O";
				}
			} else if (o == number - 1) {
				cout << " O";
				for (int o2 = 1; o2 <= 2 * number - 4; o2++) {
					cout << " ";
				}
			} else {
				cout << "O";
				for (int o2 = 1; o2 <= 2 * number - 2; o2++) {
					cout << " ";
				}
			}
			cout << "O" << endl;
		}
	}
}
