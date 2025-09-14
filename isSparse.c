/*
check if a given number is sparse or not

sparse - A number is said to be sparse number if in binary representation
of a number No two or more consecutive bits are set.


 Example :

 72 --> 0100 1000
 12 --> 0000 1100
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num = 72;

    if(num & (num>>1))
        printf("binary representation of number %d is sparse\n",num);
    else
        printf("binary representation of number %d is dense\n",num);

    return 0;
}
