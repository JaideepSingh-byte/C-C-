#include <iostream>
using namespace std;
int main()
{
    char O ;
double Number1,Number2;
cout << "Enter the 2 Numbers" << endl;
cout << "Number 1: " ;
cin >> Number1 ;
cout << "Which Operator do you wnat to use among (+ , - , * , /) ? " << endl;
cin >> O ; 
cout << "Number 2: " ;
cin >> Number2 ;
if ( (O == '+') || (O == '-') || (O == '*') || (O == '/') ){
        if (O == '+' ){
            cout << "The Sum is: " << (Number1 + Number2) << endl;
        }
        else if (O == '-' ){
            cout << "The Difference is: " << (Number1 - Number2) << endl;
        }
        else if (O == '*' ){
            cout << "The Product is: " << (Number1 * Number2) << endl;
        }
        else if (O == '/' ){
            cout << "The Answer is: " << float(float(Number1) / float(Number2)) << endl;
        }
}   
else {
    cout << "Please enter a Valid Input" << endl;
}
 return 0;
}