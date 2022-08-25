#include <iostream>

using namespace std;

int **transpose(int **array, int a) {
    int **array2 = new int *[a];
    for (int r1 = 0; r1 < a; r1++) {
        *(array2 + r1) = new int[a];
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            *(*(array2 + j) + i) = *(*(array + i) + j);
        }
    }
    return array2;
}

void inputMatrix(int **array, int a) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << "Enter the " << i + 1 << ", " << j + 1 << " index of matrix: ";
            cin >> *(*(array + i) + j);
            //*(*(array + i) + j) = rand() % 9 + 1;
        }
    }
}

void printMatrix(int **array, int a) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            cout << *(*(array + i) + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter the size of square matrix: ";
    int size;
    cin >> size;
    int **array = new int *[size];
    for (int i = 0; i < size; i++) {
        array[i] = new int[size];
    }
    inputMatrix(array, size);
	cout << "Entered Matrix" << endl;
    printMatrix(array, size);
    cout << endl;
    array = transpose(array, size);
	cout << "Transposed Matrix" << endl;
    printMatrix(array, size);
}
