#include <iostream>
using namespace std;
struct studentRec{
int enrolNo;
float CGPA;
string branch;
};
void print(studentRec order[], int size){
    for(int i=0; i<size; i++){
        cout << (i+1) << endl;
        cout << "  " << "Enrollment No.:" << order[i].enrolNo << endl;
        cout << "  " << "CGPA:          " << order[i].CGPA << endl;
        cout << "  " << "Branch:        " << order[i].branch << endl;
    }
}
void sort(studentRec Student[], int size){
    studentRec order[size];
    studentRec Max;
    int pos;
    Max.CGPA = 0;
    for (int i=0; i<size; i++){
            if(Max.CGPA<=Student[i].CGPA){
                Max = Student[i];
            }
    }
    for(int i=0; i<size ; i++){
        order[i].CGPA=10;
        //for storing the minimum value of CGPA in order and its position in pos
        for(int j=0; j<size ; j++){
            if (order[i].CGPA>=Student[j].CGPA){
                order[i] = Student[j];
                pos = j;
                }
            }
        //changing the Minimum record to Maximum Record in original copy(Student)
        Student[pos] = Max;
        }
        print(order, 3);
}
int main(){
    float CG[3];
    cout << "Enter the CGPA for 3 persons:\n";
    for(int i=0; i<3; i++){
        cin >> CG[i];
    }
    studentRec Student[3] = {26411013,CG[0],"GPT",26411015,CG[1],"GPT", 26125006,CG[2],"DS-AI"};
    sort(Student, 3);
    return 0;
}