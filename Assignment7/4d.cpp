 #include <iostream>
#include <string>
using namespace std;
void input(string* name, int*roll_no, int*marks, int size){
      for(int i = 0; i < 5; i++){
        cout << "Student " << (i+1) << endl;
        cout << "Enter name: ";
        cin >> *(name+i);
        cout << "Enter roll number: ";
        cin >> *(roll_no+i);
        cout << "Enter marks: ";
        cin >> *(marks+i);
        }
}
void display(string* name, int*roll_no, int*marks, int size){
    int sum = 0;
        cout << "\n--- Student Records ---\n";
        for(int i = 0; i < 5; i++){
            cout << "\nName: " << *(name+i);
            cout << "\nRoll Number: " << *(roll_no+i);
            cout << "\nMarks: " << *(marks+i) << endl;
            sum += *(marks+i);
        }
        cout << "\nAverage Marks: " << sum / 5.0;
}
int main(){
    string name[5];
    int marks[5], roll_no[5];
    input(name,roll_no,marks,5);
    display(name,roll_no,marks,5);
    return 0;
}