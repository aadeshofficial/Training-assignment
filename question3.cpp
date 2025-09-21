// Write a program to calculate simple interest.

#include<iostream>
using namespace std;

int main() {
    float SI, P, R, T; //SI = Simple Interest, P = Principal, R = Rate of Interest, T = Time

    cout<<"Enter the value of P : ";
    cin>>P;

    cout<<"Enter the value of R : ";
    cin>>R;

    cout<<"Enter the value of T : ";
    cin>>T;

    SI = (P * R * T) / 100;
    cout<<"The value of SI : "<< SI <<endl;+
}