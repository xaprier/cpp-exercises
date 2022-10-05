#include <iostream>

using namespace std;

int main() {
	a:
	// We want an odd number because some letters are drawn proportionally only when they are odd numbers.
	cout << "Enter an odd number which 5 or higher value: ";

	int number; // input the length of alphabet from user
	cin >> number;

	int whiteSpace1 = 0;
	int intermediateSpace = 2 * (number - whiteSpace1 - 1);

	if (number <= 4 || number % 2 == 0) { // if the number includes the conditions of program or not?
		cout << "You must enter an odd number which 5 or higher value." << endl;
		goto a;
	} else {
		for (int v = 1; v <= number; v++) {
			for (int v1 = 1; v1 <= whiteSpace1; v1++) {
				cout << " ";
			}
			cout << "V";
			for (int v2 = 1; v2 <= intermediateSpace; v2++) {
				cout << " ";
			}
			cout << "V" << endl;
			whiteSpace1++;
			intermediateSpace = 2 * (number - whiteSpace1 - 1);
		}
	}
}
