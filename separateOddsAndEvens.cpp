#include <iostream>

using namespace std;

bool inline even( int number ) {
	return number % 2 == 0;
}

void inputArray( int size, int *array, int &evens, int &odds ) {
	for (int i = 0; i < size; i++) {
		cout << "Enter index " << i << ":";
		cin >> array[ i ];
		if (array[ i ] % 2 == 0)
			evens++;
		else
			odds++;
	}
}

int main() {
	// creating variables and arrays
	int size, counter, evens = 0, odds = 0;
	cout << "Enter size of array: ";
	cin >> size;
	int *array = new int[size];

	// input function and return
	inputArray(size, array, evens, odds);

	// creating array and controllers for odds and evens
	int *oddArray = new int[odds], *evenArray = new int[evens];
	int *oddCheck = new int[odds], *evenCheck = new int[evens];

	// reset the variables
	evens = 0, odds = 0;

	// transfer element to right array and make controller
	for (int i = 0; i < size; i++) {
		if (even(array[ i ])) {
			evenArray[ evens ] = array[ i ];
			evenCheck[ evens ] = -1;
			evens++;
		} else {
			oddArray[ odds ] = array[ i ];
			oddCheck[ odds ] = -1;
			odds++;
		}
	}

	// seperate repeating numbers with controller
	for (int i = 0; i < evens; i++) {
		counter = 1;
		for (int j = i + 1; j < evens; j++) {
			if (evenArray[ i ] == evenArray[ j ]) {
				counter++;
				evenCheck[ j ] = 0;
			}
		}

		if (evenCheck[ i ] != 0) {
			evenCheck[ i ] = counter;
		}
	}

	for (int i = 0; i < odds; i++) {
		counter = 1;
		for (int j = i + 1; j < odds; j++) {
			if (oddArray[ i ] == oddArray[ j ]) {
				counter++;
				oddCheck[ j ] = 0;
			}
		}

		if (oddCheck[ i ] != 0) {
			oddCheck[ i ] = counter;
		}
	}

	// print the numbers if odds
	cout << "Odd numbers: ";
	for (int i = 0; i < odds; i++) {
		if (oddCheck[ i ] != 0) {
			cout << oddArray[ i ] << " ";
		}
	}
	cout << endl << "Even numbers: ";
	// print the numbers if even
	for (int i = 0; i < evens; i++) {
		if (evenCheck[ i ] != 0) {
			cout << evenArray[ i ] << " ";
		}
	}
	cout << endl;

}
