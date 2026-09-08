#include <iostream>
using namespace std;
int sum(int n, int a){
    int sum = 0;
    for (int i = a; i <= (n+a); i++){
        sum += i;
    }
    return sum;
}

int main(){
  int n,a;
    cout << "Enter the number you want to start from: ";
    cin >> a;
    cout << "Upto How many numbers you want to add? \n";
    cin >> n;
    cout << "The Answer is: " << sum(n,a) << endl;
    return 0;
}