#include "question3.h"
#include<iostream>

using std::cout;


int main()
{
    int num = 5;
    cout<<"The memory address of "<<num<<" is "<<&num<<"\n";

    int number = show_reference_parameter(num);
    cout<<"The original memory address of "<<num<<" is "<<&number<<"\n";

    return 0;
}