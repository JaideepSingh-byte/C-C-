#include <iostream>
using namespace std;
int main()
{
    float m;
    cout << "Enter the Marks you Gain" << endl << "I will tell you the percentage!";
    cin >> m;
    if ( m <= 400){
    float p = (m/400.0)*100;
    cout << "Your percentage is : " << p << endl;
    }
    else{
        cout << "Please Enter a valid input" << endl;
    }
    return 0;
}