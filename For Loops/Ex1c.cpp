#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to display n terms of natural number and their sum.
	*/
	cout << "Enter a number: ";
	int n, sum_of_numbers;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		sum_of_numbers += i;
	}
	cout << "The sum of Natural number upto " << n << " terms: " << sum_of_numbers << endl;
}
