// Write a program to calculate volume of a cuboid.

#include<iostream>
using namespace std;

int main() {
    float V, l, b, h; // V = Volume of cuboid, l = length, b = breadth, h = height

    cout<<"Enter the value of length : ";
    cin>>l;

    cout<<"Enter the value of breadth : ";
    cin>>b;

    cout<<"Enter the value of height : ";
    cin>>h;

    V = l * b * h;
    cout<<"The value of volume of cuboid : "<< V <<endl;
}