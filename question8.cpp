// Write a program to input three characters from the user and display characters with their corresponding ASCII codes.

#include<iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout<<"Enter the first character : ";
    cin>>ch1;

    cout<<"Enter the second character : ";
    cin>>ch2;

    cout<<"Enter the third character : ";
    cin>>ch3;
    
    int cd1 = int(ch1);
    cout<<"The ASCII code of '"<< ch1 <<"' is : "<<cd1<<endl;

    int cd2 = int(ch2);
    cout<<"The ASCII code of '"<< ch2 <<"' is : "<<cd2<<endl;

    int cd3 = int(ch3);
    cout<<"The ASCII code of '"<< ch1 <<"' is : "<<cd3<<endl;

    return 0;
}