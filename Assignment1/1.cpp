#include <iostream>
using namespace std;
int main()
{
    double r,h;
    cout<<"Here I will Tell you the Surface-Area and Volume of a Cylinder of Dimensions that you give us"<<endl<<"Kindly Enter the Dimensions :- "<<endl;
    cout<<"Enter the Radius (r) : ";
    cin>>r;
    cout<<"Enter the Height (h) : ";
    cin>>h;
    double(s) = 2*3.14159*r*h;
    double(v) = 3.14159*r*r*h;
    cout<<"The Surface-Area is : "<<s<<endl;
    cout<<"The Volume is : "<<v<<endl;
    
    return 0;
}