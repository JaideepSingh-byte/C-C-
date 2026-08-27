#include <iostream>
using namespace std;
int main(){
char choice;
do {
    int num;
    bool flag = true;
    cout << "Enter the Positive Number to check wheter it is prime or not: ";
    cin >> num;
    if ( num >= 1){
        for (int i = 2; i*i <= num ; i++){
            if (num%i == 0){
                cout << "The Number " << num << " is not Prime Number.\n";
                flag = false;
                break;
            }
        }
    } else {
        cout << "Please Enter the valid input!\n";
    }
    if (flag == true){
        cout << "The Number " << num << " is Prime Number.\n";
    }
 cout << "Do you want to continue it!\n" ;
 cout << "If yes, press y" << endl << "If No, press n\n";
 cin >> choice;
} while (choice == 'y');
    return 0;
}