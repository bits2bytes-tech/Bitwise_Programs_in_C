/*
Extract 'k' bits from a given position in a number.

number = 171

K = 5
P = 2


    0101011
     -----
     10101
*/

#include<stdio.h>

int bit_extracted(int num , int k,int pos)
{
    return (((1<<k)-1) & (num >> (pos-1)));
}

int main(void)
{
    int num = 171;
    int result = 0;

    result = bit_extracted(num,5,2);

    printf("extracted value of a number %d is %d\n",num,result);

    return 0;
}