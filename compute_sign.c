/*
Compute the sign of an integer 

*/

#include <stdio.h>

#define PORTABILITY 0

int main(void)
{
    int v;      // we want to find the sign of v
    int sign;   // the result goes here 

    #ifdef PORTABILITY
    //if you prefer the result be either -1, 0, or +1, then use: 
    sign = (v != 0) | (v >> (sizeof(int) * __CHAR_BIT__ - 1));  // -1, 0, or +1
    #elif
    // Or, for portability, brevity, and (perhaps) speed:
    sign = (v > 0) - (v < 0); // -1, 0, or +1
    #endif

    printf("sign is %d\n",sign);

    return 0;
}