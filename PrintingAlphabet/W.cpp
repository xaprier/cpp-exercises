#include <iostream>

using namespace std;

int main() {
	a:
	// We want an odd number because some letters are drawn proportionally only when they are odd numbers.
	cout << "Enter an odd number which 5 or higher value: ";

	int number; // input the length of alphabet from user
	cin >> number;

	int whiteSpace1 = number - 2;
	int intermediateSpace = 0;

	if (number <= 4 || number % 2 == 0) { // if the number includes the conditions of program or not?
		cout << "You must enter an odd number which 5 or higher value." << endl;
		goto a;
	} else {
		for (int w = 1; w <= number; w++) {
			if (w == number) {
				cout << "W";
				for (int w4 = 1; w4 <= 2 * number - 2; w4++) {
					cout << " ";
				}
				cout << "W" << endl;
			} else {
				cout << "W";
				for (int w1 = 1; w1 <= whiteSpace1; w1++) {
					cout << " ";
				}
				cout << "W";
				for (int w2 = 1; w2 <= intermediateSpace; w2++) {
					cout << " ";
				}
				cout << "W";
				for (int w3 = 1; w3 <= whiteSpace1; w3++) {
					cout << " ";
				}
				cout << "W" << endl;
				intermediateSpace += 2;
				whiteSpace1--;
			}
		}
	}
}
