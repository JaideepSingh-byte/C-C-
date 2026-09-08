#include <iostream>
using namespace std;

int lcd(int a, int b){
 /* LCD = Product of two numbers divided by HCF */
    /*For Finding HCF*/ 
    int m = (a<b?a:b);
    m += 1;
    int arr1[m];
    arr1[0]=1;
    for (int i = 2; i < m; i++){
        if((a%i == 0) && (b%i == 0)){
            for(int j = 0; j < m; j++){
                if(arr1[j] == 0){
                    arr1[j] = i;
                    break;
                }
                else {
                    arr1[j] = 0;
                    continue;
                }
            }
        }
    }
    for(int j = 0; j< m; j++){
        if (arr1[j] != 0){
        cout << arr1[j] << " " ;
    }
    }
    cout << endl;
int hcf = 1;
    for (int j=0; j < m; j++){
        if (arr1[j] != 0){
            hcf *= arr1[j];
        }
    }
int lcm;
    lcm = (a*b)/hcf;
    return lcm;
}

int main(){
  int a,b;
    cout << "Enter any two positive numbers: \n";
    cin >> a >> b;
    cout <<  lcd(a,b);
        if(a > 0 && b > 0){
            cout << "The Least Common Divisor of " << a << " and " << b << " is " << endl;
        }
        else{
            cout << "Enter a Valid Input\n";
        }

    return 0;
}