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

string ToString(Time12& time)
{
    return to_string(time.hours) + ":" + to_string(time.minutes) + " " +
        (time.isAM? "AM" : "PM");
}

string ToString(Time24& time)
{
    return to_string(time.hours) + ":" + to_string(time.minutes);
}
