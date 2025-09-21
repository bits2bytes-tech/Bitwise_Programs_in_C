/*
 Compute the minimum (min) or maximum (max) of two integers 
 without branching

On some rare machines where branching is very expensive 
and no condition move instructions exist, 
the above expression might be faster than the obvious approach,
 r = (x < y) ? x : y,
 even though it involves two more instructions. 


 It works because 
 if x < y, then -(x < y) will be all ones, 
 so r = y ^ (x ^ y) & ~0 = y ^ x ^ y = x. 
 
 Otherwise, 
 if x >= y, then -(x < y) will be all zeros, 
 so r = y ^ ((x ^ y) & 0) = y. 

*/


#include <stdio.h>

int main(void)
{
    int x=5;  // we want to find the minimum of x and y
    int y=10;   
    int r;  // the result goes here 

    //if x < y,r = x
    r = y ^ ((x ^ y) & -(x < y)); // min(x, y)

    printf("minimum of two integer is %d\n",r);
  
    //x >= y, r = y.   
    r = x ^ ((x ^ y) & -(x < y)); // max(x, y)
    printf("maximum of two integer is %d\n",r);

    return 0;
}
