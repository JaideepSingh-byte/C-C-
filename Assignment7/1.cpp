#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter Any 5 Integers\n";
    for(int i=0; i<5; i++){
        cin >> *(arr+i);
    }
    //Output to the file
    ofstream outFile("Assign9.out", ios::app);
    outFile << "Question 1 Output:-\n";
    for(int i=0; i<5; i++){
        outFile << arr[i] << " ";
    }
    outFile << endl;
    outFile.close();
    //display of output on screen
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}