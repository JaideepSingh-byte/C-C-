#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the Number: \n";
    cin >> num;
    int a = 0;
    int b = 1;
    int fib;
        for (int i =3; i <= num; i++){
            fib = (a+b);
            a = b;
            b = fib; 
        }
        cout << fib << endl;
    return 0;
}