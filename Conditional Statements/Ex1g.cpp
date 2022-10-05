#include <iostream>

using namespace std;

int main() {
	/*
	* Write a C++ program to check whether a triangle can be
	* formed by the given value for the angels.
	*/
	int angle1, angle2, angle3;
	cout << "Enter angle1, angle2, angle3 for triangle: \n";
	cin >> angle1 >> angle2 >> angle3;
	if (angle1 > 0 && angle2 > 0 && angle3 > 0 && angle1 + angle2 + angle3 == 180)
		cout << "The triangle is valid." << endl;
	else
		cout << "The triangle is not valid." << endl;
}
