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
    studentRec order[3] = {0,0,"z",0,0,"z",0,0,"z"};
    for(int k=0; k<3; k++){
        for(int i=0; i<3; i++){
            for(int j=i; j<=3; j++){
                if(order[k].CGPA != Student[i].CGPA && order[k].CGPA != Student[j].CGPA)
                    order[k] = (Student[i].CGPA < Student[j].CGPA ? Student[i] : Student[j]);
            }
        }
    }
    // i = 1 
    //  9 7 10 
    // 
    print(order);
}   
int main(){
studentRec Student[3] = {26411013,9,"GPT",26411015,10,"GPT", 26125006,7,"DS-AI"};
sort(Student);
    return 0;
}