#include <iostream>

using namespace std;

int main() {
	a:
	// We want an odd number because some letters are drawn proportionally only when they are odd numbers.
	cout << "Enter an odd number which 5 or higher value: ";

	int number; // input the length of alphabet from user
	cin >> number;

	int whiteSpace1 = 0;
	int whiteSpace2 = (number - whiteSpace1 + 2);

	if (number <= 4 || number % 2 == 0) { // if the number includes the conditions of program or not?
		cout << "You must enter an odd number which 5 or higher value." << endl;
		goto a;
	} else {
		for (int n = 1; n <= number; n++) {
			cout << "N";
			for (int n1 = 1; n1 <= whiteSpace1; n1++) {
				cout << " ";
			}
			cout << "N";
			for (int n2 = 1; n2 <= whiteSpace2; n2++) {
				cout << " ";
			}
			whiteSpace1 += 2;
			whiteSpace2 = (number - whiteSpace1 + 2);
			if (n == number) {
				cout << endl;
				continue;
			}
			cout << "N" << endl;
		}
	}
}
