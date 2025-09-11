/*
find Machine is Little Endian or Big Endian Mystery


Given integer - 0x01234567

Big Endian - |  01  |  23  |  45  |  67  |
            0x100 0x101   0x102  0x103

First byte of binary representation of 
multibyte data type is stored first.

Little Endian - |  67  |  45  |  23  |  01  |
            0x100 0x101   0x102  0x103

Last byte of binary representation of 
multibyte data type is stored first.


Determine the endianness of your machine.
*/


#include <stdio.h>

int main(void)
{
    unsigned int temp = 1;
    char *Dbyte = (char*)&temp;

    if(*Dbyte){
        printf("Little Endian\n");
    }
    else{
        printf("Big Endian\n");        
    }
    
    getchar();

    return 0;
}

/*
Breakpoint 1, main () at find_Endianness.c:31
31	    if(*Dbyte){
(gdb) p &temp
$1 = (unsigned int *) 0x7fffffffdbdc
(gdb) n
32	        printf("Little Endian\n");
(gdb) p Dbyte
$2 = 0x7fffffffdbdc "\001"
(gdb) p *Dbyte
$3 = 1 '\001'
(gdb) p (char *)&temp+1
$4 = 0x7fffffffdbdd ""
(gdb) p *(Dbyte+1)
$5 = 0 '\000'
(gdb) p (Dbyte+1)
$6 = 0x7fffffffdbdd ""
*/