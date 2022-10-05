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
		for (int s = 1; s <= number; s++) {
			if (s == 1 || s == number / 2 + 1) {
				for (int s1 = 1; s1 <= number; s1++) {
					cout << " S";
				}
			} else if (s == number) {
				for (int s2 = 1; s2 <= number; s2++) {
					cout << "S ";
				}
			} else if (s <= number / 2) {
				cout << "S";
			} else {
				for (int s3 = 1; s3 <= 2 * number - 1; s3++) {
					cout << " ";
				}
				cout << "S";
			}
			cout << endl;
		}
	}
}
