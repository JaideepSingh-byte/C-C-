#include <iostream>
using namespace std;
int main(){
    int n1,n2;
cout << "Enter the two numbers" << endl;
cout << "Number 1: ";
cin >> n1;
cout << "Number 2: ";
cin >> n2;
if ( n1 > n2){
    if ((n1%n2) == 0){
        cout << "The Number 1 is divisible by Number 2\n" ;
    } else {
        cout << "The Number 1 is not divisible by Number 2\n" ;
    }
} else {
    if ((n2%n1) == 0){
        cout << "The Number 2 is divisible by Number 1\n" ;
    } else {
        cout << "The Number 2 is not divisible by Number 1\n" ;
    }
}
    return 0;
}