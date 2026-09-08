#include <iostream>
using namespace std;
int lcd(int a, int b){
    int i,j;
    int arr1[i];
    int arr2[j];
    for(int k =2; k <= a; k++){
        if (a%k == 0){
            for (int i = 0; true; i++){
                arr1[i] = k;
            }
        } 
    }
    for(int k =2; k <= b; k++){
        if (b%k == 0){
            for (int j = 0; true; j++){
                arr1[j] = k;
            }
        } 
    }
    int m,n;
int arr3[m];
int arr4[n];
    for (int k = 0; k < i; k++){
        for (int l = 0; l < j; l++){
            if(arr1[k] == arr2[l]){
                for(int m=0; true; m ++){
                arr3[m]=arr1[k];
                }
            }
            else{
                for(int n=0; true; n += 2){
                    arr4[m] = arr1[k];
                    arr4[m+1] = arr2[l];
                }
            }
        }
    }
int lcd = 1;
{int i = 0;
int l = 0;
    for( ; true; i++, j++){
            lcd *= (arr3[i]*arr4[j]);
    }
}    
    return lcd;
}
int main(){
int a,b;
cout << "Enter the Two Numbers: ";
cin >> a >> b;
cout << "The Least Common Divisor of " << a << " and " << b << " is: " << lcd(a,b) << endl;
    return 0;
}