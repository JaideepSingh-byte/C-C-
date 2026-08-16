#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout << "Enter Any three Numbers : " << endl;
cout << "Number 1: ";
cin >> a;
cout << "Number 2: ";
cin >> b;
cout << "Number 3: ";
cin >> c;
if ( a >> b && a >> c){
    cout << "Number 1 is the Largest" << endl;
}
if ( b >> a && b >> c){
    cout << "Number 2 is the Largest" << endl;
    }
if ( c >> b && c >> a){
    cout << "Number 3 is the Largest" << endl;
}
        return 0;
}