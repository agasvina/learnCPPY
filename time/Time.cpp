#include "Time.h"
#include <iostream>

using namespace std;

Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int a, int b, int c)
{
    hour = a;
    minute = b;
    second = c;
}

Time::~Time()
{
  cout <<"Object destroyed";
}

int Time::gethours()
{
    return hour;
}

void Time::sethours(int h)
{
    hour = h;
}


void Time::setTime(int a, int b, int c) 
{
    hour = a; minute = b; second = c;
}
                     
void Time::print() {                                              
    cout << "Hour: " << hour  << "  Minute: "  << minute << "  Second: "  << second <<endl;     
}
