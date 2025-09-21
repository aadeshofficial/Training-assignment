// Write a program to calculate average of three integers. 
// Numbers are given by the user. 

#include<iostream>
using namespace std;

int main() {
    float a, b, c;

    float avg;

    cout<<"Enter the value : "<<endl;
    cin>> a >> b >> c;

    avg = (a + b + c) / 3.0; 
    cout<<"The avg value : "<<avg<<endl;

}