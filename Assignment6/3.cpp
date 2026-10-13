#include <iostream>
using namespace std;
struct Time{
    int hour;
    int min;
    int sec;
};
void display(Time display){
    if(display.sec >= 60){
        display.min += int(display.sec/60);
        display.sec %= 60;
    }
    if(display.min >= 60){
        display.hour += int(display.min/60);
        display.min %= 60;
    }
    if(display.hour >= 24 ){
        display.hour %= 24;
    }
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