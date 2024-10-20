#include "question2.h"

bool test_config()
{
    return true;
}

string decimal_to_hex(int num)
{
    string hex = "";
    int remainder = 0;
    char ch;
  
    while (num != 0) 
    {  
        remainder = num % 16;

        if (remainder < 10) {
            ch = remainder + 48;
        }
        else {
            ch = remainder + 55;
        }
    
        hex += ch;
        num = num / 16;
    }
    
    string revHex = "";
    for(int i = hex.size() - 1; i >= 0; i--)
    {
        revHex += hex[i];
    }
 
    return revHex;
}