#include <iostream>

using namespace std;

int main() {
	/*
	* Write a program in C++ to read any month number in integer
	* and display the number of days for this month.
	*/
	int year, monthnum;
	cout << "Enter month num: ";
	cin >> monthnum;
	cout << "Enter year num: ";
	cin >> year;
	switch (monthnum) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "This month has 31 days.\n";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "This month has 30 days.\n";
			break;
		case 2:
			if (year % 400 == 0)
				cout << "This month has 29 days.\n";
			else if (year % 100 == 0)
				cout << "This month has 28 days.\n";
			else if (year % 4 == 0)
				cout << "This month has 29 days.\n";
			else
				cout << "This month has 28 days.\n";
			break;
		default:
			cout << "Invalid month number.\n";
			break;
	}
}
