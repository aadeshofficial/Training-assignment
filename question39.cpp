// Write a program to find next Prime number of a given number. 

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "--- Find Next Prime Number ---" << endl;
    cout << "Enter a number: ";
    cin >> n;

    int next_num = n + 1;

    while (true) {
        bool is_prime = true;
        if (next_num <= 1) {
            is_prime = false;
        } else {
            for (int i = 2; i * i <= next_num; ++i) {
                if (next_num % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }

        if (is_prime) {
            cout << "The next prime number after " << n << " is " << next_num << endl;
            break;
        }
        next_num++;
    }

    return 0;
}