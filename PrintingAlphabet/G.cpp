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
		for (int g = 1; g <= number; g++) {
			if (g == 1 || g == number) {
				for (int g1 = 1; g1 <= number; g1++) {
					cout << " G";
				}
				cout << endl;
			} else if (g == (number / 2)) {
				for (int g2 = 1; g2 < number - 1; g2++) {
					cout << "G";
					if (g2 == number / 2) {
						for (int g3 = 1; g3 <= number - 1; g3++) {
							if (g3 == 1) {
								cout << "  ";
								continue;
							} else {
								cout << " G";
							}
						}
					} else if (g2 > number / 2) {
						for (int g4 = 1; g4 <= 2 * number - 2; g4++) {
							cout << " ";
						}
						cout << "G";
					}
					cout << endl;
				}
			}
		}
	}
}
