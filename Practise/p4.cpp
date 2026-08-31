#include <iostream>
using namespace std;
int main (){
int num;
cout << "Enter the number: ";
cin >> num; //112
int a = 0;
int b = 0;
int k = 1;
    for ( ; num >= 1; num /= 10 ){
        a = (num%10); //2 , 1 ,1
        b = (num%(100)) - a; // 12-2=10 , 11-1=10, 1-1=0
        b /= 10; //1 , 1
        if (a == b){
          k++;
        }
    
    }
 if (k != 1){
    cout << "the number of specific digit in the givin number are " << k << endl;
 } else if (k == 1) {
    cout << "No such digits repitation\n";
 }
    return 0;
}