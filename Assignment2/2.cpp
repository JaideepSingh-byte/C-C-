#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double principal, rate, time, compoundedPerYear;

    cout << "Enter principal amount (P): ";
    cin >> principal;

    cout << "Enter annual interest rate in percent (r): ";
    cin >> rate;

    cout << "Enter time period in years (t): ";
    cin >> time;

    cout << "Enter number of times interest is compounded per year (n): ";
    cin >> compoundedPerYear;

    double r = rate / 100.0;

    double amount = principal * pow((1 + r / compoundedPerYear), (compoundedPerYear * time));

    double compoundInterest = amount - principal;

    cout << "Total Amount: " << amount << endl;
    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}