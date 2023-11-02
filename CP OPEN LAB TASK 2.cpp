#include <iostream>
using namespace std;

bool

isPrime(int number)

{
    if (number < 2) {
        return

            false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return

                false;
        }
    }

    return

        true;
}
void findPrimeNumbersInRange(int lowerBound, int upperBound) {
    cout << "Prime numbers in the range " << lowerBound << " to " << upperBound << ":" << endl;

    for (int i = lowerBound; i <= upperBound; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}

void checkIfPrimeNumber(int number) {
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    }
    else {
        cout << number << " is not a prime number." << endl;
    }
}
int main() {
    cout << "Enter your choice:" << endl;
    cout << "1. Find prime numbers in a given range" << endl;
    cout << "2. Check if a specific number is prime" << endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
        int lowerBound, upperBound;

        cout << "Enter the lower bound of the range: ";
        cin >> lowerBound;

        cout << "Enter the upper bound of the range: ";
        cin >> upperBound;

        findPrimeNumbersInRange(lowerBound, upperBound);
    }
    else if (choice == 2) {
        int number;

        cout << "Enter a number: ";
        cin >> number;

        checkIfPrimeNumber(number);
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
