/*
Find the duplicates of array using bit array you have 
an array of N numbers , where N is at most 320000.
The array may have duplicates entries 
and you do not know what N is with only 4KB of memory available.

how would print all duplicates elements in the array.

*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


unsigned int array[1001];

bool get(int pos)
{
    int index = pos >> 5;
    int bitNo = pos & 0x1F;

    return (array[index] & (1<<bitNo)) != 0;
}

void set(int pos)
{
    int index = (pos >> 5);
    int bitNo = pos & 0x1F;
    array[index] |= 1 << bitNo;
}

//Main function to print all duplicates
void CheckDuplicates(int array[], int size)
{
    for(int itemp=0;itemp<size;itemp++)
    {
        int num = array[itemp];
        

        if(get(num))
            printf("Already present = %d\n",num);
        else
            set(num);
    }
}

int main(void)
{
    int array[]={ 1,5,1,10,12,10};

    int usize = sizeof(array)/sizeof(array[0]);

    CheckDuplicates(array,usize);

    return 0;
}

