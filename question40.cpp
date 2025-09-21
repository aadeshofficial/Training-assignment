// Write a program to check whether a given number is an Armstrong number or not. 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original_num, remainder, n_digits = 0;
    double result = 0.0;

    cout << "--- Armstrong Number Checker ---" << endl;
    cout << "Enter an integer: ";
    cin >> n;

    original_num = n;

    int temp = n;
    while (temp != 0) {
        temp /= 10;
        n_digits++;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n_digits);
        temp /= 10;
    }

    if ((int)result == original_num) {
        cout << original_num << " is an Armstrong number." << endl;
    } else {
        cout << original_num << " is not an Armstrong number." << endl;
    }

    return 0;
}