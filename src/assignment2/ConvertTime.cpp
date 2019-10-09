#include <iostream>
#include "ConvertTime.hpp"

using namespace std;

Time12* ConvertTime(Time24& time24) {
    // TODO: fill in the body
}

Time24* ConvertTime(Time12& time12) {
    // TODO: fill in the body
}

bool Equal(Time12& time1, Time12& time2)
{
    return time1.hours == time2.hours &&
        time1.minutes == time2.minutes &&
        time1.isAM == time2.isAM;
}

bool Equal(Time24& time1, Time24& time2)
{
    return time1.hours == time2.hours &&
        time1.minutes == time2.minutes;
}

string ToString(int hour_or_min)
{
    if (hour_or_min < 10) {
        return "0" + to_string(hour_or_min);
    } else {
        return to_string(hour_or_min);
    }
}

string ToString(Time12& time)
{
    return ToString(time.hours) + ":" + ToString(time.minutes) + " " +
        (time.isAM? "AM" : "PM");
}

string ToString(Time24& time)
{
    return ToString(time.hours) + ":" + ToString(time.minutes);
}
