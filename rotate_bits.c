/*
Rotate bits in a given number

*/

#include<stdio.h>

#define INT_BITS    32

#define ROTATE_LEFT(pos,data)   ((data << pos) | (data << (INT_BITS - pos)))

#define ROTATE_RIGHT(pos,data)  ((data >> pos) | (data << (INT_BITS - pos)))

int main()
{
    int pos = 2;    //Number of rotation
    int data = 32;  //data which will be rotate

    printf("%d\n",ROTATE_LEFT(pos,data));
    printf("%d\n",ROTATE_RIGHT(pos,data));

    return 0;
}