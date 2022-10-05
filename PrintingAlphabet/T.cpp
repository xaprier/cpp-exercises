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
		for (int t = 1; t <= number; t++) {
			if (t == 1) {
				for (int t1 = 1; t1 <= number; t1++) {
					cout << "T ";
				}
			} else {
				for (int t2 = 1; t2 <= number - 1; t2++) {
					cout << " ";
				}
				cout << "T";
			}
			cout << endl;
		}
	}
}
