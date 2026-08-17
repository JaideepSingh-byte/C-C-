#include <iostream>
using namespace std;
int main()
{
    int y;
        cout << "Enter a year: \n";
        cin >> y;
    int l = (y % 4);
    if (l == 0){
        cout << y << " is a leap year\n";
    }
    else {
        cout << y << " is not a leap year\n";
    }
   return 0;
}