#include <iostream>

using namespace std;

int main() {
	/*
	* Write a C++ program to accept two integers and
	* check whether they are equal or not
	*/
	int num1, num2;
	cout << "Enter num1 and num2: " << endl;
	cin >> num1 >> num2;
	if (num1 == num2)
		cout << "num1 and num2 is equal.\n";
	else
		cout << "num1 and num2 is not equal.\n";
}
