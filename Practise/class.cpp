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
        bool foundpair = false;
        cout << "Enter the number: ";
        cin >> num; //1202324526
            for ( ; num > 0; num /= 10){//120232452
                if (foundpair == false){
                a = (num%(j/10)); // 2;
                }
                b = (num%j) - a; // 52-2=50
                b /= (j/10);// 50/10=5;
                if (a == b){
                   k++; // 0;
                } else {
                     n = num; //120232452;
                    for( ; n > 0; n /= 10 ){//5
                        c = (n%(j*10)) - (n%j); // 452-52=400;
                        c /= (j); // 4;
                        if (a == c){
                            foundpair = true;
                            k++; //0;
                            break;
                        }
                    }
                }
            }
    cout << k << endl;
    return 0;
}