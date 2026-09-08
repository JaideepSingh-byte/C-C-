#include <iostream>
using namespace std;

double sqlarge(int (&arr)[2]){
    int sq,large;
    large = (arr[0] >= arr[1]? arr[0] : arr[1]);
    sq = large*large;
    return sq;
}

int sum(int n){
    int s = 0;
    for(int i; n > 0; n /= 10){
        i = n%10;
        s += i;
    }
    return s;
}

int main(){
    int arr[2];
    int n;
    cout << "Enter the numbers you want to compare: \n";
        for (int i = 0; i < 2; i++){
            cin >> arr[i];
        }
    cout << "Enter the number whose digit sum you want to know: ";
    cin >> n;

    cout << "The square of the larger number is " << sqlarge(arr) << endl;
    cout << "The sum of digits of number " << n << " is " << sum(n) << endl;
    return 0;
}