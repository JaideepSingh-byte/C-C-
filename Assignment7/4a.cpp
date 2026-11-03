#include <iostream>
#include <string>
using namespace std;
/*This is an example of Student Record using class and function in C++ programing language*/
class Student
{
    string name[5];
    int roll[5], marks[5];
public:
    void input()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << "\nStudent " << i+1 << endl;
            cout << "Enter name: ";
            cin >> name[i];
            cout << "Enter roll number: ";
            cin >> roll[i];
            cout << "Enter marks: ";
            cin >> marks[i];
        }
    }
    void display()
    {
        int sum = 0;
        cout << "\n--- Student Records ---\n";
        for(int i = 0; i < 5; i++)
        {
            cout << "\nName: " << name[i];
            cout << "\nRoll Number: " << roll[i];
            cout << "\nMarks: " << marks[i] << endl;
            sum += marks[i];
        }
        cout << "\nAverage Marks: " << sum / 5.0;
    }
};
int main()
{
    Student s;
    s.input();
    s.display();
    return 0;
}