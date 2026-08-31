#include <iostream>
using namespace std;
int main (){
 int num;
    cout << "enter the number: ";
    cin >> num;
 int n;
    cout <<"Which Number do you want to check its Number of repitation? ";
    cin >> n;
 int a,b;
 int k = 0;
        while ( num > 0){
            a = (num%10);
            if (a == n){
                k++;
            }
        }
    if ( k == 0){
       cout << "Your Number doesn't contain the number " << n << ".\n"; 
    }
    else {
        cout << "The Number " << n << "is " << k << "time in the given Number.\n";
    }
    return 0;
}