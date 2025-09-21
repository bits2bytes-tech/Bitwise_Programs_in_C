/*

count set bits
*/



#include <stdio.h>
#include <time.h>

int main(void)
{
    unsigned int v = 0xAA; // count the number of bits set in v
    unsigned int c; // c accumulates the total bits set in v

    float startTime = (float)clock()/CLOCKS_PER_SEC;

    for (c = 0; v; v >>= 1)
    {
        c += v & 1;
    }

    float endTime = (float)clock()/CLOCKS_PER_SEC;

    float timeElapsed = endTime - startTime;

    printf("Number of set bits is %d\n",c);
    printf("time to count set bits is %f\n",timeElapsed);


    v = 0x55;
    c = 0;

    startTime = (float)clock()/CLOCKS_PER_SEC;

    while(v)
    {
        c += v & 1;
        v >>= 1;
    }

    endTime = (float)clock()/CLOCKS_PER_SEC;

    timeElapsed = endTime - startTime;

    printf("Number of set bits is %d\n",c);
    printf("time to count set bits is %f\n",timeElapsed);

    return 0;
}