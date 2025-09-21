/*

Determining if an integer is a power of 2 


*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned int v = 128; // we want to see if v is a power of 2
    bool f;         // the result goes here 

    //f = (v & (v - 1)) == 0;

    //Note that 0 is incorrectly considered a power of 2 here. 
    //To remedy this, use:

    f = v && !(v & (v - 1));

    if(f == true)
    {
        printf("the given integer is power of two\n");
    }  
    else{
        printf("is not a power of two\n");        
    }

    return 0;
}
