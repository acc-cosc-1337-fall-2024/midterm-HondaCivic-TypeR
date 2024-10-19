#include "question1.h"
#include<iostream>

using std::cout; using std::cin;
int main()
{
    auto entry = 0;
    auto widget = 0;

    cout<<"Hello.\n";
    cout<<"To use our point calculator, press '1'.\n";
    cout<<"If you don't want to use our calculator, press any other number.\n";
    cin>>entry;

    while (entry == 1)
    {
        cout<<"Please enter your total number of widgets sold: \n";
        cin>>widget;
        cout<<"Your total earned points is: "<<get_earned_points(widget)<<"\n\n\n";

        cout<<"Would you like to use the calculator again? If so, press '1' again.\n";
        cout<<"If not, press any other number.\n";
        cin>>entry;
    }

    if(entry != 1)
    {
        cout<<"Looks like you don't want to use the calcuator.\n";
        cout<<"Goodbye.\n";
    }

    return 0;
}