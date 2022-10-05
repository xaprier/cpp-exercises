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
		for (int y = 1; y <= number; y++) {
			if (y < number / 2) {
				for (int y1 = 1; y1 <= 2 * number - 1; y1++) {
					if (y1 == 1 || y1 == 2 * number - 1) {
						cout << "Y";
					}
					cout << " ";
				}
				cout << endl;
			} else if (y == number / 2) {
				for (int y2 = 1; y2 <= number; y2++) {
					if (y2 == (number / 2) + 1) {
						cout << "   ";
						continue;
					}
					cout << "Y ";
				}
				cout << endl;
			} else {
				for (int y3 = 1; y3 <= 2 * number; y3++) {
					if (y3 == number) {
						cout << "YY";
					}
					cout << " ";
				}
				cout << endl;
			}
		}
	}
}
