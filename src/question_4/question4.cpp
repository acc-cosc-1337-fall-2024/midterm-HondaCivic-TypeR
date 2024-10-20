#include "question4.h"

bool test_config()
{
    return true;
}

int get_hours(int seconds_since_1970)
{
    int hours = seconds_since_1970 / 3600;
    int remainder = hours % 24; 
    
    return remainder;
}

int get_minutes(int seconds_since_1970)
{
    int minutes = seconds_since_1970 / 60;
    int remainder = minutes % 60;

    return remainder;
}

int get_seconds(int seconds_since_1970)
{
    int seconds = seconds_since_1970 % 3600;
    int remainder = seconds % 60;

    return remainder;
}