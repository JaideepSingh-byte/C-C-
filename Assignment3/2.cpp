#include <iostream>
using namespace std;
int main (){
    int a,b;
    cout << "Enter the number of rows and columns: \n";
    cin >> a >> b ;
    int arr[a][b];
    int trans[b][a];
    cout << "Enter the entries: \n";
    for (int i=0; i < a; i++){
        for (int j=0; j < b; j++){
            cin >> arr[i][j];
        }
    }
        for (int i = 0; i < a; i++){
        for (int j = 0; j < b ; j++){
            trans[j][i] = arr[i][j];
        }
    }
    
    cout << "The Transpose of the Given Matrix\n";
    for (int i = 0; i < b; i++){
        cout << "|";
        for (int j = 0; j < a ; j++){
            cout << " " << arr[i][j] << " ";
        }
        cout << "|" << endl;
    }

    cout << " is given below: " << endl;
    for (int i = 0; i < b; i++){
        cout << "|";
        for (int j = 0; j < a ; j++){
            cout << " " << trans[i][j] << " ";
        }
        cout << "|" << endl;
    }

    return 0;
}