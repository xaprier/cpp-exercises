#include <iostream>

using namespace std;

int main() {
	/*
	Prime numbers are not divisible by 2, 3, 5 and 7 (except themselves).
	According to this feature, it is the code that prints the prime numbers and their number.
	*/
	cout << "Enter top-limit for print and count: ";
	int limit;
	cin >> limit;
	int divisors;
	// assign the prime count as 0 for ++
	int pCount = 0;
	// Since prime numbers start from 2, we start the loop from 2
	for (int i = 2; i <= limit; i++) {
		// We set the divisors variable as 0 so that if the number of divisors is increased in the inner loop,
		// it will not suppress the i value, that is, the number. And every time the loop starts, it will be assigned 0 again
		// so that the divisors variable is 0 while trying every number.
		divisors = 0;
		// Check if our number is divisible by 2, 3, 5, 7 without a remainder (if it is divisible, the codes below work = not prime number check)
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
			// Check if the divisible numbers are 2, 3, 5 or 7(Since prime numbers are also divisible by themselves, we will eliminate the prime numbers 2,3,5,7 with this condition)
			if (i != 2 && i != 3 && i != 5 && i != 7) {
				// if condition is true increment the value of divisors
				divisors++;
			}
		}
		// if there is no number divisible by our number
		if (divisors == 0) {
			// print the value
			cout << i << " ";
			// increment the count
			pCount++;
		}
	}
	cout << endl;
	cout << "There is " << pCount << " prime numbers between 1 and " << limit << endl;
	return 0;
}
