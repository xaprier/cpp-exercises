#include <iostream>

using namespace std;

int main() {
	a:
	// We want an odd number because some letters are drawn proportionally only when they are odd numbers.
	cout << "Enter an odd number which 5 or higher value: ";

	int number; // input the length of alphabet from user
	cin >> number;

	int whiteSpace1 = 0;
	int intermediateSpace = 2 * (number - whiteSpace1 - 2);

	if (number <= 4 || number % 2 == 0) { // if the number includes the conditions of program or not?
		cout << "You must enter an odd number which 5 or higher value." << endl;
		goto a;
	} else {
		for (int m = 1; m <= number; m++) {
			cout << "M";
			if (m == 1) {
				for (int m1 = 1; m1 <= 2 * number - 2; m1++) {
					cout << " ";
				}
			} else {
				for (int m2 = 1; m2 <= whiteSpace1; m2++) {
					cout << " ";
				}
				cout << "M";
				for (int m3 = 1; m3 <= intermediateSpace; m3++) {
					cout << " ";
				}
				cout << "M";
				for (int m4 = 1; m4 <= whiteSpace1; m4++) {
					cout << " ";
				}
				whiteSpace1++;
				intermediateSpace = 2 * (number - whiteSpace1 - 2);
			}
			cout << "M" << endl;
		}
	}
}
