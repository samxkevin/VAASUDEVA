#include<bits/stdc++.h>
using namespace std;
int main(){
    string TimeIn12HourClock;
    cin>>TimeIn12HourClock;
    string TimeIn24HourClock;
    if(TimeIn12HourClock.substr(8,9)=="PM"&&TimeIn12HourClock.substr(0,2)!="12"){
        int corrector=stoi(TimeIn12HourClock.substr(0,2))+12;
        string TimeIn24HourClock=to_string(corrector)+(TimeIn12HourClock.substr(2,6));
        cout<<TimeIn24HourClock;
    }
    else if(TimeIn12HourClock.substr(0,2)=="12"&&TimeIn12HourClock.substr(8,9)=="AM"){
        string TimeIn24HourClock="00"+(TimeIn12HourClock.substr(2,6));
        cout<<TimeIn24HourClock;
    }
    else if(TimeIn12HourClock.substr(0,2)=="12"&&TimeIn12HourClock.substr(8,9)=="PM"){
        string TimeIn24HourClock=TimeIn12HourClock.substr(0,8);
        cout<<TimeIn24HourClock;
    }
    else{
    cout<<TimeIn12HourClock.substr(0,8);
    }
}