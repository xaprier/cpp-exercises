#include <iostream>

using namespace std;

int main() {
	/*
		This code will print a equilateral triangle
	*/
	cout << "Enter number of line: ";
	int line;
	cin >> line;
	for (int i = 1; i <= line; i++) {
		for (int j = 1; j <= line - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
