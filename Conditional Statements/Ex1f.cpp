#include <iostream>

using namespace std;

int main() {
	/*
	* Write a C++ program to accept a coordinate point
	* in a XY coordinate system and determine in which
	* quadrant the coordinate point lies.
	*/
	cout << "Enter X then Y: " << endl;
	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0)
		cout << "The coordinate point (" << x << "," << y << ") lies in the First Quadrant.\n";
	else if (x > 0 && y < 0)
		cout << "The coordinate point (" << x << "," << y << ") lies in the Fourth Quadrant.\n";
	else if (x < 0 && y > 0)
		cout << "The coordinate point (" << x << "," << y << ") lies in the Second Quadrant.\n";
	else if (x < 0 && y < 0)
		cout << "The coordinate point (" << x << "," << y << ") lies in the Third Quadrant.\n";
	else
		cout << "The coordinate point (" << x << "," << y << ") lies in the Coordinate System.\n";
}
