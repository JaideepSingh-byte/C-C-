 #include <iostream>
 #include <fstream>
 using namespace std;
 int main(){
    //Taking Input from User and storing in file
    string name;
    int roll_no, marks;
    ofstream fout("Student.txt", ios::app);
    cout << "Enter the Student Record Here:\n";
    for(int i=0; i<5; i++){
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll_no;
        cout << "Marks:";
        cin >> marks;
        // Storing the student record in Student.txt file(Output)
        fout << name << endl;
        fout << roll_no << endl;
        fout << marks << endl;
    }
fout.close();//Display of the Record by taking Input from Student.txt file
    ifstream fin("Student.txt");
    for(int i=0; i<5; i++){
        cout << "\nName: ";
        fin >> name;
        cout << name;
        cout << "\nRoll No: ";
        fin >> roll_no;
        cout << roll_no;
        cout << "\nMarks:";
        fin >> marks;
        cout << marks;
    }
    fin.close();
    cout << endl;
    return 0;
 }