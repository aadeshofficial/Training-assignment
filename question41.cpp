// Write a program to print all Armstrong numbers under 1000 

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "--- Armstrong Numbers Under 1000 ---" << endl;

    for (int num = 1; num < 1000; ++num) {
        int original_num = num;
        int n_digits = 0;
        double result = 0.0;

        int temp = num;
        while (temp != 0) {
            temp /= 10;
            n_digits++;
        }

        temp = num;
        while (temp != 0) {
            int remainder = temp % 10;
            result += pow(remainder, n_digits);
            temp /= 10;
        }

        if ((int)result == original_num) {
            cout << original_num << " ";
        }
    }
    cout << endl;

    return 0;
}