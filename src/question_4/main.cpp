#include "question4.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    //using 1729397652 as of 11:14PM
    int hours = get_hours(1729397652);
    int minutes = get_minutes(1729397652);
    int seconds = get_seconds(1729397652);

    cout<<"It has been "<<hours<<" hours, "<<minutes<<" minutes, and "<<seconds<<" seconds since 1970.";
    return 0;
}