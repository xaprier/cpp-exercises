#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter N value: ";
    cin >> N;
    int *array = new int[N], *array2 = new int[N];
    for (int i = 0; i < N; i++) {
        cout << "Enter array value: ";
        cin >> array[i];

        // assignment of all the values for repeat counter
        array2[i] = -1;
    }
    int count;
    for (int i = 0; i < N; i++) {
        // reset count to 1
        count = 1;
        for (int j = i + 1; j < N; j++) {

            // if the index i value equals to next indexes
            if (array[i] == array[j]) {

                // increment count by 1
                count++;

                // assign count to 0 for repeated values after index i
                array2[j] = 0;
            }
        }

        // if index i count not equals to 0
        if (array2[i] != 0) {

            // assign the count to count array
            array2[i] = count;
        }
    }

    // printing the count of values
    for (int i = 0; i < N; i++) {

        // repeated numbers not counted again
        if (array2[i] != 0) {

            // printing
            cout << "Number " << array[i] << " repeating " << array2[i] << " times." << endl;
        }
    }
}