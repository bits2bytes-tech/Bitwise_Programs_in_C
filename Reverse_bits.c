/*
write an efficient C program to reverse bits of a number

Revere num  - Keep putting the set bits of a number into 
revese number till becomes 0 by right shift, 
then left shift the remaining bit count.



Example in Char :
num : 0000 0110  // After 3 left shift the number becomes zero
Reverse number : 0000 0011  --> 3 counts shifted
Reverse number : 0110 0000  <-- 5 counts remaining


By optimising the number of iteration we save 4 extra iterations.
*/

#include <stdio.h>

unsigned int ReverseBits(unsigned int num)
{
    unsigned int count = sizeof(num)*__CHAR_BIT__-1;
    unsigned int reverse_num = num;

    num >>=1;

    while(num)
    {
        reverse_num <<= 1;
        reverse_num |= num & 1;
        num >>= 1;
        count--;
    }
    reverse_num <<= count;

    return reverse_num;
}

int main(void)
{
    unsigned int Xvar=29;
    unsigned int Yvar=0;

    printf("given Number : %X\n",Xvar);
    Yvar = ReverseBits(Xvar);

    printf("Reverse Number : %X\n",Yvar);

    return 0;
}

