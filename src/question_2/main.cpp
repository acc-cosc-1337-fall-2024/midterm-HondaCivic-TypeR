#include "question2.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    int entry;
    int number;

    cout<<"Hello.\n";
    cout<<"Would you like to convert a number, between 1 and 512, to hexadecimal?\n";
    cout<<"If so, press '1'. If not, press '2'.\n";
    cin>>entry;
    
    while(entry == 1)
    {
        cout<<"Please enter your number, between 1 and 512, that you would like to convert to hexadecimal: \n";
        cin>>number;
        if(number >= 1 && number <= 512)
        {
            cout<<number<<" in hexadecimal is "<<decimal_to_hex(number)<<"\n\n";

            cout<<"Would you like to convert another number?\n";
            cout<<"If so, press '1'. If not, press '2'.\n";
            cin>>entry;
        }
        else
        {
            cout<<"Woah! "<<number<<" isn't within the specified range of 1 to 512. Try again.\n\n";
        }

    }

    if(entry == 2)
    {
        cout<<"Exiting. Goodbye.\n";
    }
    else
    {
        cout<<"Invalid Entry.\n";
    }


    return 0;
}