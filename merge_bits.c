/*
Merge bits from two values according to a mask 

*/
#include <stdio.h>


int main()
{
    unsigned int a = 5;    // value to merge in non-masked bits
    unsigned int b = 8;    // value to merge in masked bits
    unsigned int mask = (1 << 6) - 1; // 1 where bits from b should be selected; 0 where from a.
    unsigned int r = 0;    // result of (a & ~mask) | (b & mask) goes here

    r = a ^ ((a ^ b) & mask); 

    printf("the merged value is %d",r);
    
    return 0;
}

