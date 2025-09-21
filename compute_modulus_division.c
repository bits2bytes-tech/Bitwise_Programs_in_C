/*
Compute modulus division by 1 << s 
without a division operator 

m = n % d

*/

#include <stdio.h>

int main(void)
{
    const unsigned int n = 11;          // numerator
    const unsigned int s = 2;

    // So d will be one of: 1, 2, 4, 8, 16, 32, ...
    const unsigned int d = 1U << s; 
    unsigned int m;                // m will be n % d

    m = n & (d - 1);    

    printf("modulus devision result is %d\n",m);

    return 0;
}

/*
(gdb) info local
n = 11
s = 2
d = 4
m = 3

m = 11 % 4 = 3
*/