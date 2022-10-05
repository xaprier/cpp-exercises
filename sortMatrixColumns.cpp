#include <iostream>

using namespace std;

void sortTheColumns( int **array, int rows, int columns );

int main() {
	int M, N;
	cout << "Enter row number of matrix: ";
	cin >> M;
	cout << "Enter column number of matrix: ";
	cin >> N;
	int **arr = new int *[M];
	for (int i = 0; i < M; i++)
		arr[ i ] = new int[N];

	cout << "Enter the matrix members row by row: " << endl;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			cin >> *(*(arr + i) + j);

	sortTheColumns(arr, M, N);
}

void sortTheColumns( int **array, int rows, int columns ) {
	int temporary;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			for (int k = 0; k < rows - j - 1; k++) {
				if (*(*(array + k) + i) < *(*(array + (k + 1)) + i)) {
					temporary = *(*(array + (k + 1)) + i);
					*(*(array + (k + 1)) + i) = *(*(array + k) + i);
					*(*(array + k) + i) = temporary;
				}
			}
		}
	}
	cout << "The matrix with sorted columns:" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << *(*(array + i) + j) << " ";
		}
		cout << endl;
	}
}
