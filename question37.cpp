// Write a program to print all Prime numbers under 100. 

#include <iostream>

using namespace std;

int main() {
    cout << "--- Prime Numbers Under 100 ---" << endl;

    for (int num = 2; num < 100; ++num) {
        bool is_prime = true;
        
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}