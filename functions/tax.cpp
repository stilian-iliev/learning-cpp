#include <iostream>
using namespace std;

const double TAX_RATE = 0.2;

double calculateTax(double subTotal, double taxRate = TAX_RATE);

int main()
{
    double subTotal = 10;
    double total = calculateTax(subTotal);

    cout << "Your total is:" << total << endl;
}

double calculateTax(double subTotal, double taxRate)
{
    return subTotal + subTotal * taxRate;
}