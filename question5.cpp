/* Write a program to ask user about the cost price and selling price banana per dozen.
   Calculate the profit or loss earned upon selling 25 bananas.
*/ 

#include<iostream>
using namespace std;

int main() {
    float CPPD, SPPD; // CPPD =cost price per dozen, SPPD = selling price per dozen 
    float CP25, SP25, ProfitOrLoss; // CP25 = cost price of 25 bananas, SP25 = selling price of 25 bananas

    cout<<"Enter Cost Price per dozen of bananas: ";
    cin>>CPPD;

    cout<<"Enter Selling Price per dozen of bananas: ";
    cin>>SPPD;

    CP25 = (CPPD / 12) * 25;
    SP25 = (SPPD / 12) * 25;

    ProfitOrLoss = SP25 - CP25;

    if (ProfitOrLoss > 0) {
        cout << "Profit = " << ProfitOrLoss << endl;
    } else if (ProfitOrLoss < 0) {
        cout << "Loss = " << -ProfitOrLoss << endl;
    } else {
        cout << "Keep gooing!!! No Profit, No Loss" << endl;
    }

    return 0;
}
