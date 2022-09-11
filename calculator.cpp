#include <cmath>
#include <iostream>

using namespace std;

int factorial(int a) {
    return (a <= 1 && a >= 0) ? 1 : a * factorial(a - 1);
}

int main() {
    long double result = 0;
    double num1, num2;
    char operation;
    cout << "Enter number: ";
    cin >> num1;
    while (true) {
        cout << "Choose your operation. Current operations are - + * / ! % =" << endl;
        cin >> operation;
        if (operation == '=') {
            break;
        }
        switch (operation) {
            case '-':
                cout << "Enter number: ";
                cin >> num2;
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '+':
                cout << "Enter number: ";
                cin >> num2;
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '*':
                cout << "Enter number: ";
                cin >> num2;
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '/':
                cout << "Enter number: ";
                cin >> num2;
                result = (double)num1 / num2;
                cout << num1 << " / " << num2 << " = " << result << endl;
                break;
            case '!':
                result = factorial(num1);
                cout << num1 << "! = " << result << endl;
                break;
            case '%':
                cout << "Enter number: ";
                cin >> num2;
                result = fmod(num1, num2);
                cout << num1 << " % " << num2 << " = " << result << endl;
                break;
            case '=':
                cout << "Operation terminating.." << endl;
                break;
            default:
                cout << "There is no operation like you specified." << endl;
                break;
        }
        num1 = result;
        result = 0;
    }
    cout << "Last result = " << num1;
}