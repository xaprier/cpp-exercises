#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter the square matrix's row and colum number: ";
    cin >> N;

    // create an array with dynamic memory allocation (N + 1 is for the pattern and logic)
    int **array = new int *[N + 1];
    for (int i = 0; i < N + 1; i++) {
        array[i] = new int[N + 1];
    }

    // assign 0 to matrix's all the values
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < N + 1; j++) {
            array[i][j] = 0;
        }
    }

    // handling of assign the random value, or addition of row or addition of column or addition of diagonal
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < N + 1; j++) {
            // if the number of row "and" colum equal to last row and column(diagonal addition)
            if (i == N && j == N) {
                for (int k = 0; k < N; k++) {
                    array[i][j] += array[k][k];
                }
            // else if the value of row equal to last row(row addition of column k)
            } else if (i == N) {
                for (int k = 0; k < N; k++) {
                    array[i][j] += array[k][j];
                }
            // else if the value of column equal to last column(column addition of row k)
            } else if (j == N) {
                for (int k = 0; k < N; k++) {
                    array[i][j] += array[i][k];
                }
            // else assign a random value between 10-19
            } else {
                array[i][j] = rand() % 10 + 10;
            }
        }
    }

    // print the pattern with special handle for printing
    int check = 0;
    cout << "Matrix" << endl;
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < N + 1; j++) {
            // if the column number is before the last column
            if (j == N - 1) {
                cout << array[i][j] << "\t\t";
            // else if the row number equal to last row
            } else if (i == N) {
                // if the column is first "and" the check equal to zero
                if (j == 0 && check == 0) {
                    cout << endl;
                    check++;
                }
                cout << array[i][j] << "\t";
            } else {
                cout << array[i][j] << "\t";
            }
        }
        cout << endl;
    }
}
