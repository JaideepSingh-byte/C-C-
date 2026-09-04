#include <iostream>
using namespace std;

int prime_no(int num){
        for (int j = 4; j <= num; j++){
            bool p = false;
            for(int i=2; i < j; i++){
                if (j%i == 0){
                    p = false;
                    break;
                } else {
                    p = true;
            }
            }
            if (p == true){
                cout << j << endl;
            }
        }
    return 0;
}

int main ()
{
    int n; 
    cout << "Enter: \n";
    cin >> n;
    cout << "The Prime Numbers less than or equal to " << n << " are: " << endl;
    if (n==3){
        cout << "2\n" << "3\n";
    }
    else if (n == 2){
        cout << "2\n";
    }
    else if (n > 3){
        cout << "2\n" << "3\n";
        prime_no(n);
    }
    return 0;
}