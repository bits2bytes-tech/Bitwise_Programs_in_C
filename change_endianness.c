/*
How to change endianness of a Value in the machine.
*/

#include <stdio.h>

unsigned int ChangeEndianness(unsigned int value)
{
    unsigned int result = 0;
    result |= (value & 0x000000FF) << 24;
    result |= (value & 0x0000FF00) <<8;
    result |= (value & 0x00FF0000) >> 8;
    result |= (value & 0xFF000000) >> 24;

    return result;
}


int main(void)
{
    unsigned int uvalue = 0x12345678;

    unsigned int nvalue = ChangeEndianness(uvalue);

    printf("changed endianess value is %x\n",nvalue);

    return 0;
}