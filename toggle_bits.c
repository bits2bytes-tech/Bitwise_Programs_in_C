/*

Toggle bits in a given range

left = 2 
right = 3
num = 17

17 ---> 10001

1 << right ---> 1000
(1<<right)-left ---> 0110


    10001
   ^00110
-----------
    10111  --> 23

*/
#include <stdio.h>

unsigned int toggle_bits(unsigned int num,unsigned int left,unsigned int right)
{
    unsigned int u_num = (1<<right)-left;

    return num ^ u_num;
}

int main(void)
{
    unsigned int xVar = 17,left =2 , right = 3;
    unsigned int yVar = 0;

    /* toggle bits from Left to right */

    yVar = toggle_bits(xVar, left, right);

    printf("Toggled bits in a number %d to get the toggled number %d\n", xVar,yVar);
}

