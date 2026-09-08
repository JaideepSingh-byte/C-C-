#include <iostream>
#include <cmath>
using namespace std;

int main (){
  int row;
  int col;
    cout << "Enter the number of Rows and columns: \n";
    cin >> row >> col;
    int arr[row][col];
    cout << "Enter the Enteries of the Matrix\n" ;
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                cin >> arr[i][j];
            }
        } 
    if (row == col){
    double sqroot;
   for(int i = 0; i < row ; i++){
    {   if ( arr[i][i] >= 0){
         sqroot = sqrt(arr[i][i]);
         cout << "The Square Root of entry at ["<< i << "]" << "["<< i << "] " << sqroot << endl;
    }
        }
    }        
    } else {
            cout << "The given Matrix is not Square Matrix\n" ;
            }
    return 0;
}