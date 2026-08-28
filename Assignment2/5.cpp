#include <iostream>
using namespace std;
void billupto100(){
    cout << "The Electricity Bill amount is: ";
}
void billabove100(){
    cout << "You are charged 15% more of the bill amount, on the basis of your Consumption!\n";
    cout << "The Total Payable amount is: ";
}
int main(){
    int unit;
do {
    cout << "Enter the units consumed by you: ";
    cin >> unit;
double bill100,bill200,bill300,total;
bill100 = unit*(2.5);
bill200 = (100*2.5) + (unit-100)*3.0;
bill300 = (100*2.5) + (200*3) + (unit-300)*4.0;

    if ((0 <= unit) && (unit <= 80)){
        billupto100();
        cout << "200 Rupees only\n";
        }
    else if ((80 < unit) && (unit <= 100)){
        billupto100();
        cout << bill100 << endl;
        }
    else if ((100 < unit) && (unit <= 300)){
        total = ((15*bill200)/100);
        billabove100();
        cout << bill200 << " + " << total << " = " << (bill200+total) << endl;
        }
    else if (300 < unit){
       total = ((15*bill300)/100);
        billabove100();
        cout << bill300 << " + " << total << " = " << (bill300+total) << endl;
        }
    else {
        cout << "Enter a Valid input\n";
    }
} while ( unit < 0);
    return 0;
}