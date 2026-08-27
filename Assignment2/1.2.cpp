#include <iostream>
using namespace std;
int main()
{
double side;
//get user input
cout << "Please enter the length of the side : ";
cin >> side;
/*act on user input*/
if(side < 0.0) {
cout<<"Cannot have a negative side"<<endl;
}  else  {
cout<<"The area of the square is " << (side*side) << endl;
}
return 0;
}
