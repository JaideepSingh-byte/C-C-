#include <iostream>
using namespace std;

int sqlarge(int a, int b){
        int c = ( (a>b) ? a : b);
        int sq = c*c;
        cout << sq << endl;
    return sq;
}

int main(){
        int a,b;
        cout << "Enter the Numbers: " << endl;
        cin >> a >> b;
        cout << "The Square of the Larger number is " << sqlarge(a,b) << endl;
    return 0;
}