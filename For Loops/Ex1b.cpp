#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to find the sum of first 10 natural numbers.
	*/
	int sum_of_numbers = 0;
	for (int i = 0; i < 10; i++) {
		sum_of_numbers += i;
	}
	cout << "The Sum is: " << sum_of_numbers << endl;
}
