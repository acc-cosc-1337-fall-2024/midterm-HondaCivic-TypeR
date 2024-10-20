#include "question4.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    //using 1570875018, provided from second test case
    int hours = get_hours(1570875018);
    int minutes = get_minutes(1570875018);
    int seconds = get_seconds(1570875018);

    cout<<"It has been "<<hours<<" hours, "<<minutes<<" minutes, and "<<seconds<<" seconds since 1970.";
    return 0;
}