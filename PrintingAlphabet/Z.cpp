#include <iostream>

using namespace std;

int main() {
	a:
	// We want an odd number because some letters are drawn proportionally only when they are odd numbers.
	cout << "Enter an odd number which 5 or higher value: ";

	int number; // input the length of alphabet from user
	cin >> number;

	int whiteSpace1 = 2 * number - 4;

	if (number <= 4 || number % 2 == 0) { // if the number includes the conditions of program or not?
		cout << "You must enter an odd number which 5 or higher value." << endl;
		goto a;
	} else {
		for (int z = 1; z <= number; z++) {
			if (z == 1 || z == number) {
				for (int z1 = 1; z1 <= number; z1++) {
					cout << "Z ";
				}
			} else {
				for (int z2 = 1; z2 <= whiteSpace1; z2++) {
					cout << " ";
				}
				cout << "Z";
				whiteSpace1 -= 2;
			}
			cout << endl;
		}
	}
}
