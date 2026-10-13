#include <iostream>
#include <string>
using namespace std;
struct studentRec{
int enrolNo;
float CGPA;
string branch;
};
void print(studentRec Student[]){
    for(int i=0; i<3; i++){
        cout << (i+1) << endl;
        cout << "  " << "Enrollment No.:" << Student[i].enrolNo << endl;
        cout << "  " << "CGPA:          " << Student[i].CGPA << endl;
        cout << "  " << "Branch:        " << Student[i].branch << endl;
    }
}
void sort (studentRec Student[]){
    bool chk = true; // Assuming the ith Value is less than (i+1)th 
    studentRec temp;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(Student[i].CGPA > Student[j].CGPA){
                chk = false;
            }   
            if(chk == false){
                temp = Student[i];
                Student[i] = Student[j];
                Student[j] = temp;
            }
        }
    }
    print(Student);
}   
int main(){
studentRec Student[3] = {26411013,10,"GPT",26411015,10,"GPT", 26125006,10,"DS-AI"};
sort(Student);
    return 0;
}