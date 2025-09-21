// Write a program to calculate circumference of a circle. 

#include<iostream>
using namespace std;

int main() {
    float circumference, radius;
    float Pi = 3.14159;

    cout<<"Enter the value of radius of the circle : ";
    cin>>radius;

    circumference = Pi * radius;
    cout<<"The value of circumference of a circle : "<<circumference<<endl;

    return 0;
}