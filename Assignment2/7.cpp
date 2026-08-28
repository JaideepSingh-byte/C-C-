#include <iostream>
using namespace std;

int main(){

int num,msd;
int i = 0;
cout << "Enter the integer (N): ";
cin >> num;
   if (num == 0){  
        i = 1;      
        msd = 0;
   }       
    else if (num > 0) {
        for ( ; num > 0; num = int(num/10)){
        msd = num%10; 
        i++;
        }
    }
    else if (num < 0) {
        num = (-1)*num;
        for ( ; num > 0; num = int(num/10)){
        msd = num%10; 
        i++;
        }
    }
    cout << i << endl << msd << endl;
 int Y = (10*i + msd);
cout << "The Integer Y is: "<< Y << endl;
    return 0;
}