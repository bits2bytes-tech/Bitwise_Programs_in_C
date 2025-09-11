/*
Compute the integer obsolute value without branching

mask = n>>31
(mask + n) ^ mask

Example :

-6  ---> 0xFFFF FFFA
        +0xFFFF FFFF
        -----------
        1111 1010
       +1111 1111
        ------------
        1111 1001  (-7)
       ^1111 1111
       -------------
        0000 0110  (6)

*/
#include <stdio.h>

unsigned int get_abs(int n){
    int const mask = n >> (sizeof(int)*__CHAR_BIT__-1);
    return ((n+mask)^mask);
}

int main (void)
{
    int integer = -6;

    unsigned int obsolute_value = get_abs(integer);

    printf("obsolute value of integer : %d is %d \n",integer,obsolute_value);

    return 0;
}

