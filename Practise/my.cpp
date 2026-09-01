#include <iostream>
using namespace std;
int main(){
        int a = 0;
        int b = 0;
        int c = 0;
        int n;
        int j = 100;
        int k = 1;
        int num;
        cout << "Enter the number: ";
        cin >> num; //12345
            for ( ; num > 0; num /= 10){
                a = (num%(j/10)); //5;
                b = (num%j) - a; //45-5=40;
                b /= (j/10);// 40/10=4;
                if (a == b){
                   k++; // 0;
                
                } else {
                     n = num; //12345;
                    for( ; n > 0; n /= 10 ){
                        c = (n%(j*10)) - (n%j); // 345-45=300;
                        c /= (j); // 300/100=3;
                        if (a == c){
                            k++; //0;
                            break;
                        }
                    }
                }
            }
    cout << k << endl;
    return 0;
}