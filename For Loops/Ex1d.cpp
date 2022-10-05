#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to read 10 numbers from keyboard
	* and find their sum and average.
	*/
	double average;
	int sum_of_numbers = 0, temp;
	for (int i = 1; i <= 10; i++) {
		cout << "Number " << i << " : ";
		cin >> temp;
		sum_of_numbers += temp;
	}
	average = ( double ) sum_of_numbers / 10;
	cout << "The sum of 10 number is: " << sum_of_numbers << endl;
	cout << "The average is: " << average << endl;
}
