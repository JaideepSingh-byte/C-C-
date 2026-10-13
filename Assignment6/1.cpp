#include <iostream>
using namespace std;
struct StudentRec{
string Name;
int rollNo;
float AttendancePerc;
char grade;
};
int main(){
    StudentRec firstStudent = {"Jaideep Singh", 26411013, 100, 'A'};
    StudentRec secondStudent = {"Karamjeet Singh", 26411015, 100, 'A'};
    cout << "            Student 1            Student 2\n";
    cout << "Name:       " << firstStudent.Name << "        " << secondStudent.Name <<  endl;
    cout << "Roll No.:   " << firstStudent.rollNo << "             " << secondStudent.rollNo <<  endl;
    cout << "Attendance: " << firstStudent.AttendancePerc << "                  " <<secondStudent.AttendancePerc <<  endl;
    cout << "Grade:      " << firstStudent.grade << "                    " << secondStudent.grade <<  endl;
    return 0;
}