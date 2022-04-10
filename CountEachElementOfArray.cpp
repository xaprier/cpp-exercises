#include <iostream>
using namespace std;

int main() {
    int arr1[100], countarr[100], counter, n;

    cout << "Enter array size: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Enter index " << i << ":";
        cin >> arr1[i];
        countarr[i] = -1;   // controller for counter
    }

    for (int i = 0; i < n; i++) {
        counter = 1;
        for (int j = i + 1; j < n; j++) {
            if(arr1[i] == arr1[j]) {
                counter++;
                countarr[j] = 0;
            }
        }

        if (countarr[i] != 0)
            countarr[i] = counter;
    }

    for (int i = 0; i < n; i++) {
        if (countarr[i] != 0) {
            cout << "Number " << arr1[i] << " used " << countarr[i] << " times." << endl;
        }
    }
}