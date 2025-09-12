/*
swap all odd and even bits

Example:

0001 0111  --> 23
0010 1011  --> 43

*/
#include <stdio.h>

int main(void)
{
    unsigned int nVar = 23;
    unsigned int Result = 0;
    unsigned int even_bits = nVar & 0xAAAAAAAA;
    unsigned int odd_bits = nVar & 0x55555555;

    even_bits >>= 1;    //Right shift evevn bits
    odd_bits <<=1;      //Left shift odd bits

    Result = (even_bits | odd_bits);

    printf("Result value : %d\n",Result);

    return 0;
}

