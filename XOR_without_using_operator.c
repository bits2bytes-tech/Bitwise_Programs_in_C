/*
Find the XOR of two numbers without using XOR operator.
*/

#include<stdio.h>

int XOR_1(int X,int Y)
{
    return (X|Y) & (~X|~Y);
}

int XOR_2(int X,int Y)
{
    return (X|(~Y)) & ((~X)&Y);
}


int main(void)
{
    int xVar = 12 , yVar = 21;

    printf("Xored number : %d\n",XOR_1(xVar,yVar));

    return 0;
}