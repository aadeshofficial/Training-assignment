// Write a program to input a character from the user and print its ASCII code.

#include<iostream>
using namespace std;

int main() {
    
    char ch;

    cout<<"Enter the character : ";
    cin>>ch;

    cout<<"The ASCII code of '"<< ch <<"' is : "<<int(ch);

    return 0;
}