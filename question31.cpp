// Write a program to reverse a given number 

#include <iostream>

using namespace std;

int main() {
    int n, reversed_number = 0, remainder;

    cout << "--- Reverse a Number ---" << endl;
    cout << "Enter an integer: ";
    cin >> n;

    int original_num = n; 

    while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    cout << "The reverse of " << original_num << " is: " << reversed_number << endl;

    return 0;
}