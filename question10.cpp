// WAP to take time as an input in below given format and convert the time format and display the result as given below. 
// User Input date format – “HH:MM” 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string time;
    cout << "Enter time in format HH:MM : ";
    cin >> time;

    string hour = time.substr(0, 2);
    string minute = time.substr(3, 2);

    cout << "Hour - " << hour << ", Minute - " << minute << endl;

    return 0;
}
