#include <iostream>
using namespace std;
int main()
{
double a;
double b;
double c;
double s;
cout<<"Enter any three Real Numbers : " << endl;
cout << "Number1 : ";
cin >> a;
cout << "Number2 : ";
cin >> b;
cout << "Number3 : ";
cin >> c;
s = a+b+c;
cout << "The sum of the Given Numbers is : "<< s << endl;
cout << "And The Average of the Given Numbers is : " << (s/3) << endl;
    return 0;
}