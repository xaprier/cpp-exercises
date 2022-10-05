#include <iostream>

using namespace std;

int main() {
	cout << "Enter the side length of square: ";

	int length;
	cin >> length;

	string area = to_string(length * length);
	if (length <= 4) {
		cout << "Value must be at least 5";
	} else if (length % 2 == 0) {
		cout << "Value must be an odd integer";
	} else {
		for (int i = 1; i <= length; i++) {
			if (i == 1 || i == length) {
				for (int i = 1; i <= length; i++) {
					cout << "M ";
				}
			} else if (i == (length / 2) + 1) {
				for (int k = 1; k <= 2 * length; k++) {
					if (k == length - area.length() + 1) {
						cout << area;
					}
					if (k == 1 || k == 2 * length - 2 - area.length()) {
						cout << "M";
					}
					cout << " ";
				}
			} else {
				for (int j = 1; j <= 2 * length; j++) {
					if (j == 1 || j == 2 * length - 2) {
						cout << "M";
					}
					cout << " ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}
