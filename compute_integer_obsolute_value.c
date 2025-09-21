/*
Compute the integer obsolute value without branching

Since negative numbers are stored in 2's complement form, 
o get the absolute value of a negative number
we have to toggle bits of the number and add 1 to the result.
For example -2 in a 8 bit system is stored as follows 1 1 1 1 1 1 1 0 
where leftmost bit is the sign bit.
 To get the absolute value of a negative number, 
we have to toggle all bits and add 1 to the toggled number 
i.e, 0 0 0 0 0 0 0 1 + 1 will give the absolute value of 1 1 1 1 1 1 1 0. 
Also remember, 
we need to do these operations only if the number is negative 
(sign bit is set).


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

