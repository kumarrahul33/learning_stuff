#include<bits/stdc++.h>
using namespace std;

class MyClock
{
    private :
    int hours;
    int minutes;
    int seconds;

    public:
    MyClock(int _seconds)
    {
        seconds = _seconds; 
        minutes = 11;
        hours = 10;
    }

    MyClock(int _minutes, int _seconds)
    {
        seconds = _seconds; 
        minutes = _minutes;
        hours = 22;
    }

    MyClock(int _hours, int _minutes, int _seconds)
    {
        seconds = _seconds; 
        minutes = _minutes;
        hours = _hours;
    }

    string lead_o(int a)
    {
        if(a < 10) return "0" + to_string(a);
        return to_string(a);
    }

    void currentTime()
    {
        if(hours > 00 && hours < 12) cout << lead_o(hours) << ":" << lead_o(minutes) << ":" << lead_o(seconds) << " AM" << endl;
        
        else if(hours == 12) cout << lead_o(hours) << ":" << lead_o(minutes) << ":" << lead_o(seconds) << " PM" << endl;

        else if(hours > 12) cout << lead_o(hours - 12) << ":" << lead_o(minutes) << ":" << lead_o(seconds) << " PM" << endl;

        else cout << lead_o(12) << ":" << lead_o(minutes) << ":" << lead_o(seconds) << " AM" << endl;
    }

    int operator < (MyClock &myClock1)
    {
        int _hours = hours <= 12 && hours >=1 ? hours : hours == 0 ? 12 : hours - 12;
        int _hours1 =  myClock1.hours <= 12 ? myClock1.hours : myClock1.hours - 12;

        if(_hours1 != _hours)
            return _hours1 > _hours ? 1 : 0;
        
        else if(myClock1.minutes != minutes)
            return myClock1.minutes > minutes ? 1 : 0;
        
        else return myClock1.seconds > seconds ? 1 : 0;
        
    }

    ~MyClock()
    {
        currentTime();
    }
};