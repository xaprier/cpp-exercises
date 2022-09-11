// code a basic calculator with using switch case. this calculator will include addition, subtraction, multiplication, dividing, factorial, and power of number.
// power of number and factorial will be code as functions. with this code you have to use pointers as arrays and keep the all operations in memory. on the = operation it's gonna print all the operations have been completed.
#include <cmath>
#include <iostream>
using namespace std;

int powerofnumber(long double num1, long double num2) {
    int result = 1;
    for (int i = 0; i < num2; i++) {
        result *= num1;
    }
    return result;
}

int factorial(int num1) {
    if (num1 <= 0)
        return 0;
    else
        return (num1 > 1) ? num1 * factorial(num1 - 1) : 1;
}

int main() {
    long double num1[1000], num2[1000], result[1000];
    char operation[1000];
    int operationCounter = 0;
    cout << "Enter your number: ";
    cin >> *(num1 + operationCounter);
    while (true) {
        cout << "Choose your operation( + - / * ^ ! % ): ";
        cin >> *(operation + operationCounter);
        if (*(operation + operationCounter) == '=') {
            for (int i = 0; i < operationCounter; i++) {
                if (*(operation + i) == '!') {
                    cout << "Result " << i + 1 << " -> " << *(num1 + i) << *(operation + i) << "=" << *(result + i) << endl;
                } else {
                    cout << "Result " << i + 1 << " -> " << *(num1 + i) << *(operation + i) << *(num2 + i) << "=" << *(result + i) << endl;
                }
            }
            break;
        }
        switch (*(operation + operationCounter)) {
            case '+':
                cout << "Enter the number which will add: ";
                cin >> *(num2 + operationCounter);
                *(result + operationCounter) = *(num1 + operationCounter) + *(num2 + operationCounter);
                operationCounter++;
                *(num1 + operationCounter) = *(result + operationCounter - 1);
                break;
            case '-':
                cout << "Enter the number which will subtract: ";
                cin >> *(num2 + operationCounter);
                *(result + operationCounter) = *(num1 + operationCounter) - *(num2 + operationCounter);
                operationCounter++;
                *(num1 + operationCounter) = *(result + operationCounter - 1);
                break;
            case '/':
                cout << "Enter the number which will divide: ";
                cin >> *(num2 + operationCounter);
                *(result + operationCounter) = *(num1 + operationCounter) / *(num2 + operationCounter);
                operationCounter++;
                *(num1 + operationCounter) = *(result + operationCounter - 1);
                break;
            case '*':
                cout << "Enter the number which will multiplicate: ";
                cin >> *(num2 + operationCounter);
                *(result + operationCounter) = *(num1 + operationCounter) * *(num2 + operationCounter);
                operationCounter++;
                *(num1 + operationCounter) = *(result + operationCounter - 1);
                break;
            case '^':
                cout << "Enter the number which will power of number: ";
                cin >> *(num2 + operationCounter);
                *(result + operationCounter) = powerofnumber(*(num1 + operationCounter), *(num2 + operationCounter));
                operationCounter++;
                *(num1 + operationCounter) = *(result + operationCounter - 1);
                break;
            case '!':
                *(result + operationCounter) = factorial(*(num1 + operationCounter));
                operationCounter++;
                *(num1 + operationCounter) = *(result + operationCounter - 1);
                break;
            case '%':
                cout << "Enter the number which will be remainder: ";
                cin >> *(num2 + operationCounter);
                *(result + operationCounter) = fmod(*(num1 + operationCounter), *(num2 + operationCounter));
                operationCounter++;
                *(num1 + operationCounter) = *(result + operationCounter - 1);
                break;
            default:
                cout << "Invalid operation";
                break;
        }
    }
}