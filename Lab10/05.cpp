#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>

using namespace std;

class Time{
private:
    int hour, minutes, second;

public:
    int getHour(){
        return hour;
    }

    int getMinute(){
        return minutes;
    }

    int getSecond(){
        return second;
    }
    Time(int h, int m, int s){
        hour = h;
        minutes = m;
        second = s;
    }

    
    Time(int duration){
        hour = (duration / 3600) % 24;
        minutes = (duration % 3600) / 60;
        second = duration % 60;
    }

    int getDuration(){
        return hour * 3600 + minutes * 60 + second;
    }

    Time add(Time other){
        int totalSeconds = getDuration() + other.getDuration();
        return Time(totalSeconds);
    }

    int subtract(Time other){
    int timeDiff = getDuration() - other.getDuration();
    if (timeDiff < 0){
        
        return 86400 + timeDiff;
    }

    return timeDiff;

    }
    int equals(Time other){
        if (hour == other.hour && minutes == other.minutes && second == other.second) {
            return 1;
        } else {
            return 0;
        }
    }

    string toString(){
    string result = "";

    if(hour < 10){
        result += "0" + to_string(hour);

    }else{
        result += to_string(hour);

    }
    result += ":";
    if(minutes < 10){
        result += "0" + to_string(minutes);

    }else{
        result += to_string(minutes);

    }
    result += ":";
    if(second < 10){
        result += "0" + to_string(second);

    }else{
        result += to_string(second);
        
    }
    return result;
}

};

int main() {
    Time a(2, 2, 2);
    Time b(1, 1, 1);

    cout << "Time A: " << a.toString() << endl;
    cout << "Time B: " << b.toString() << endl;
    
    cout << "A - B = " << a.subtract(b) << " sec." << endl;
    cout << "B - A = " << b.subtract(a) << " sec." << endl;

    Time c = a.add(b);
    cout << "A + B = " << c.toString() << endl;

    cout << "Are A and B equal? " << (a.equals(b) ? "Yes" : "No") << endl;

    return 0;
}
