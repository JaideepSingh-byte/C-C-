#include <iostream>
using namespace std;
int main()
{
    char O ;
long Number1,Number2;
cout << "Which Operator do you wnat to use among (+ , - , * , /) ? " << endl;
cin >> O ; 
if ( (O == '+') || (O == '-') || (O == '*') || (O == '/') ){
cout << "Enter the 2 Numbers" << endl;
cout << "Number 1: " ;
cin >> Number1 ;
cout << "Number 2: " ;
cin >> Number2 ;
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
            cout << "The Quotient is: " << long (long(Number1) / long(Number2)) << endl;
        }
}   
else {
    cout << "Please enter a Valid Input" << endl;
}
 return 0;
}