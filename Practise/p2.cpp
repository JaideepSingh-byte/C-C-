#include <iostream>
using namespace std;

int main(){

int num;
cout << "Enter the Number: ";
cin >> num;
int i;
int reverse = 0;
    while (num >= 1){
        i = num%10;
        num /= 10;
        reverse = reverse*10 + i;
    }
    cout << reverse << endl;
return 0;
}