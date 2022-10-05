#include <iostream>

using namespace std;

void sortMatrix( int **array, int row, int column );

int main() {
	int M, N;
	cout << "Enter the row number of matrix: ";
	cin >> M;
	cout << "Enter the column number of matrix: ";
	cin >> N;

	// create a 2d array with dynamic memory allocation
	int **ptr = new int *[M];
	for (int a = 0; a < M; a++)
		ptr[ a ] = new int[N];

	// input the values of matrix
	cout << "Enter the values of " << M << "x" << N << " Matrix" << endl;
	for (int b = 0; b < M; b++)
		for (int c = 0; c < N; c++)
			cin >> *(*(ptr + b) + c);

	// call the function
	sortMatrix(ptr, M, N);
}

void sortMatrix( int **array, int row, int column ) {
	int temporary;
	// we will think the array as 1d array in the loop and sort with temporary variable
	for (int i = 0; i < row * column - 1; i++) {
		for (int j = 0; j < row * column - 1 - i; j++) {
			// row = j/column
			// column = j%column
			if (*(*(array + j / column) + j % column) > *(*(array + (j + 1) / column) + (j + 1) % column)) {
				temporary = *(*(array + (j + 1) / column) + (j + 1) % column);
				*(*(array + (j + 1) / column) + (j + 1) % column) = *(*(array + j / column) + j % column);
				*(*(array + j / column) + j % column) = temporary;
			}
		}
	}

	cout << "The order of the matrix from largest to smallest is as follows:" << endl;
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < column; c++) {
			cout << *(*(array + r) + c) << " ";
		}
		cout << endl;
	}
}
