/*
    Detect if two integers have opposite signs
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x= -4, y= +4;               // input values to compare signs

    bool f = ((x ^ y) < 0); // true if x and y have opposite signs

    printf("signs of x = %d and y = %d  is positive is %d",f);
    
    return 0;
}

