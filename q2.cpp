#include<iostream>
using namespace std;
class Time{
    public:
    int hour;
    int minute;
    string meridian;
    Time(int hour,int minute,string meridian){
        this->hour=hour;
        this->minute=minute;
        this->meridian=meridian;
    }
    void displayTime(){
        cout<<hour<<":"<<minute<<" "<<meridian<<endl;
    }
    void operator ++(){
        minute++;
        if(minute==60){
            hour++;
            minute=0;
        }

        if(hour>12)
    }
};
int main() {
    Time t(12,20,"PM");
    ++t;
    cout<<t.minute<<endl;
    return 0;
}