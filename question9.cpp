// WAP to take date as an input in below given format and convert the date format and display the result as given below. 
// User Input date format – “DD/MM/YYYY” (27/11/2022) 
// Output format – “Day – DD , Month – MM , Year – YYYY” 
// (Day – 27, Month – 07, Year – 2022)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string date;
    cout << "Enter date in format DD/MM/YYYY: ";
    cin >> date;

    string day = date.substr(0, 2);
    string month = date.substr(3, 2);
    string year = date.substr(6, 4);

    cout << "Day - " << day << ", Month - " << month << ", Year - " << year << endl;

    return 0;
}
