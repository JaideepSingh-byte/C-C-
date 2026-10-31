#include <iostream>
#include <fstream>
using namespace std;
int* sort(int* arr, int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<(size-i); j++){
            if(*(arr+j) > *(arr+j+1)){
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
    return arr;
}
int main(){
    int arr[10];
    cout << "Enter any 10 integers\n";
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }
    ofstream fout("Assign9.out", ios::app);
    int* ptr= sort(arr, 10);
    fout << "Question 3 Output:-\n";
    fout << "The sorted array is";
    for(int i=0; i<10; i++){
        fout << *(ptr+i) << " ";
    }
    fout << endl;
    return 0;
}