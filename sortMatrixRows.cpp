#include <iostream>

using namespace std;

void sortTheRows( int **arr, int rows, int columns );

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

	sortTheRows(arr, M, N);
}

void sortTheRows( int **arr, int rows, int columns ) {
	int temporary;
	for (int k = 0; k < rows; k++) {
		for (int i = 0; i < columns; i++) {
			for (int j = 0; j < columns - 1 - i; j++) {
				if (arr[ k ][ j ] > arr[ k ][ j + 1 ]) {
					temporary = arr[ k ][ j + 1 ];
					arr[ k ][ j + 1 ] = arr[ k ][ j ];
					arr[ k ][ j ] = temporary;
				}
			}
		}
	}
	cout << "The matrix with sorted rows:" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << *(*(arr + i) + j) << " ";
		}
		cout << endl;
	}
}
