#include <iostream>
using namespace std;
int prime(int num){
    bool p = false;
    for (int i=2; i < num; i++){
        if(num%i == 0){
            p = false;
            break;
        } 
    }
    if (p == false){
        cout << num << " is not prime\n" ;
    } else {
        cout << num << " is Prime.\n";
    }
    return 0;
}

int main(){
    int a;
cout << "Enter the Numbers:\n";
cin >> a;
prime(a);
    return 0;
}