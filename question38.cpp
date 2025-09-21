// Write a program to print all Prime numbers between two given numbers. 


#include <iostream>

using namespace std;

int main() {
    int start, end;

    cout << "--- Prime Numbers in a Range ---" << endl;
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << " are:" << endl;

    for (int num = start; num <= end; ++num) {
        if (num <= 1) continue;

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