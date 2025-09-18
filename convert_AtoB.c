/*
Count Number of bits to be flipped to convert A to B.

*/


#include <stdio.h>

int CountFlippedBits(int A,int B)
{
    int XorResult = 0;
    int Count = 0;

    XorResult = (A^B);

    while(XorResult)
    {
        Count += XorResult & 1;
        XorResult >>= 1;
    }

    return Count;
}

int main(void)
{
    int cValue = 0;

    cValue = CountFlippedBits(45,74);

    printf("The no of bits to be flipped is %d\n",cValue);

    return 0;
}






