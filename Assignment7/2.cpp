#include <iostream>
#include <fstream>
#include <limits>
using namespace std;
int* ptr;
int pos;
//Passing the adderress of the first element of Array and then chasing the other elements from it.
int* Max_finder(int* arr, int size){
    /*Defining MAX as negative infinity and 'pos' variable to store the position of that Maxima*/
    double MAX = -numeric_limits<double>::infinity();
    for(int i=0; i<size; i++){
        if(MAX < *(arr+i)){
            MAX = *(arr+i);
            pos = i;
        }
    }
    return (arr+pos);
}
int main(){
    int size;
    ofstream fout("Assign9.out", ios::app);
    cout << "Enter the size of the array\n";
    cin >> size;
    int Arr[size];
    cout << "Enter the enteries of an array\n";
    for(int i=0; i<size; i++){
        cin >> *(Arr+i);
    }
    /*Passing the Adderess and size*/
    /*output of the value at the address stored in pointer 'ptr*/
    fout << "Question 2 Output:-\n";
    fout << "The Maximum Value is: " << *(Max_finder(Arr,size)) << endl;
    fout.close();
    return 0;
}