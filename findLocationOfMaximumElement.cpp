#include <iostream>
#include <stdlib.h>

using namespace std;

#pragma region prototypeMethods

void locationsOfMaxElements( int **array, int m, int n );

int findMaxElement( int **array, int m, int n, int &max );

void findTotal( int **array, int m, int n, int &total, int max );

void print2DArray( int **array, int m, int n );

void printLocation( int *array, int *array2, int m );

#pragma endregion prototypeMethods

int main() {
	int row, column;
	cout << "How many rows will there be?" << endl;
	cin >> row;
	cout << "How many columns will there be?" << endl;
	cin >> column;

	// creating 2d dimensional array
	int **array = new int *[row];
	for (int i = 0; i < row; i++) {
		array[ i ] = new int[column];
	}

	// random number assignment to array
	for (int i = 0; i < row; i++)
		for (int j = 0; j < column; j++)
			array[ i ][ j ] = rand() % 19 + 1; // between 1-20

	locationsOfMaxElements(array, row, column);
}

#pragma region Methods

void locationsOfMaxElements( int **array, int m, int n ) {
	int max = 0;
	int total = findMaxElement(array, m, n, max);
	int *xloc = new int[total], *yloc = new int[total], start = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (max == array[ i ][ j ]) {
				// assignment the location x and y
				xloc[ start ] = i + 1;
				yloc[ start ] = j + 1;
				// increment the size of locations
				start++;
			}

	cout << "Our 2D Array" << endl;
	print2DArray(array, m, n);

	cout << "Locations of " << total << " pcs " << max << " : ";
	printLocation(xloc, yloc, start);
}

int findMaxElement( int **array, int m, int n, int &max ) {
	int total = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (max < array[ i ][ j ]) {
				max = array[ i ][ j ];
			}
	findTotal(array, m, n, total, max);
	return total;
}

void findTotal( int **array, int m, int n, int &total, int max ) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (array[ i ][ j ] == max)
				total++;
}

void print2DArray( int **array, int m, int n ) {
	for (int i = 0; i < m; i++) {
		if (i == 0) {
			cout << "\t\t";
			for (int k = 0; k < n; k++) {
				cout << k + 1 << "\t";
			}
			cout << endl << endl << endl;
		}

		for (int j = 0; j < n; j++) {
			if (j == 0)
				cout << i + 1 << "\t\t";

			cout << *(*(array + i) + j) << "\t";
		}
		cout << endl;
	}
}

void printLocation( int *array, int *array2, int m ) {
	for (int i = 0; i < m; i++)
		cout << array[ i ] << "x" << array2[ i ] << " ";
	cout << endl;
}

#pragma endregion Methods
