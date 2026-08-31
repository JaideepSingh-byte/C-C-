#include <iostream>
using namespace std;
int main(){
    int num,a;
    cout << "Enter the Number: ";
    cin >> num;
    num = a;
    int i;
    int reverse = 0;
  while (num >= 1){
        i = num%10;
        num /= 10;
        reverse = reverse*10 + i;
    }
            if (reverse = a){
                cout << "The Number is Pallindrome" << endl;
            }else {
                 cout << "The Number is not Pallindrome\n";
            }
return 0;
}