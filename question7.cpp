// Write a program to input an ASCII code from the user and print its corresponding character.

#include<iostream>
using namespace std;

int main() {
    int ASCIIcode;

    cout<<"Enter the ASCIIcode(0 - 127) : ";
    cin>>ASCIIcode;

    char ch = char(ASCIIcode);
    cout<<"The character of '"<< ASCIIcode <<"' is : '"<< ch <<"'"<<endl;

    return 0;
}