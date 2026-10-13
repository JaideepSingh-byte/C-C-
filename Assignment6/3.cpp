#include <iostream>
using namespace std;
struct Time{
    int hour;
    int min;
    int sec;
};
void display(Time display){
    cout << "Time: " << display.hour << ":" << display.min << ":" << display.sec << endl;
}
void Set_Time(Time set){
    cout << "Setup The Time here:\n";
    cout << "Hour:";
    cin >> set.hour;
    cout << "Minute:";
    cin >> set.min;
    cout << "Second:";
    cin >> set.sec;
    display(set);
}
int main(){
Time Input;
    Set_Time(Input);
    return 0;
}