#include "question1.h"

bool test_config()
{
    return true;
}

int get_earned_points(int sold)
{
    int pointsEarned = 1;

    if(sold >= 1 && sold <= 5)
    {
        pointsEarned = sold * 1;
    }
    if(sold >= 6 && sold <= 10)
    {
        pointsEarned = sold * 5;
    }
    if(sold >= 11 && sold <= 15)
    {
        pointsEarned = sold * 10;
    }
    if(sold >= 16)
    {
        pointsEarned = sold * 15;
    }

    return pointsEarned;
}