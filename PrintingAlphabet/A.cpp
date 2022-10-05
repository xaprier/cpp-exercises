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
		// A for loop which is for every line. So variable a means the line.
		for (int a = 1; a <= number; a++) {
			if (a == 1) { // if the line is 1
				cout << " "; // print a whitespace then
				// Let 2*number-2 print A side by side.
				for (int a1 = 1; a1 <= 2 * number - 2; a1++) {
					cout << "A";
				}
			} else if (a == (number / 2) + 1) { // if the line is a middle line
				// Let 2*number print A side by side.
				for (int a2 = 1; a2 <= 2 * number; a2++) {
					cout << "A";
				}
			} else { // if the above conditions are not met
				// A column loop which start with 1 to 2*number-1
				for (int a3 = 1; a3 <= 2 * number - 1; a3++) {
					// print A if the columns is 1 or end of column(2*number-1)
					// if not print 1 whitespace
					if (a3 == 1 || a3 == 2 * number - 1) {
						cout << "A";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
