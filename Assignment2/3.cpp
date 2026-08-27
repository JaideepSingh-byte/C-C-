#include <iostream>
using namespace std;
int main(){
bool flag;
double Fahrenheit, Celsius;
cout << "Please enter the type of Temperature conversion: \n";
cout << "Type 0 for converting from Fahrenheit to Celsius \n";
cout << "Type 1 for converting from Celsius to Fahrenheit \n";
cin >> flag;
if (flag == 0){
    cout << "Enter the Temperature in Fahrenheit: ";
    cin >> Fahrenheit;
    Celsius = ((5)*(Fahrenheit)/(9) - (32));
    cout << "The Temperature in Degree Celsius is: " << Celsius << endl;
}
else if (flag == 1){
    cout << "Enter the Temperature in Celsius: ";
    cin >> Celsius;
    Fahrenheit = ((9)*(Celsius)/5 + 32);
    cout << "The Temperature in Fahrenheit is: " << Fahrenheit << endl;
}
else {
    cout << "Please Enter a valid input\n";
}
    return 0;
}