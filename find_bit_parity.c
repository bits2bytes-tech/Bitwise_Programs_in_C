/*
Program to find parity

Parity of a number refers to wheather it contains an odd (or) 
even number of bits.

The number has "odd parity", if it contains odd number of 1-bits,
 and "even number" if it contains even number of 1-bits.

*/
#include <stdio.h>
#include <stdbool.h>

bool get_parity(unsigned int num)
{
    bool parity = 0;

    while(num)
    {
        parity = !parity;
        num = num & (num-1);     //Unset the right most set bits
    }

    return parity;
}


int main(void)
{
    bool parity_check = 0;
    unsigned int nVal = 99;

    parity_check = get_parity(nVal);

    if (parity_check)
    {
        printf("odd parity\n");
    }
    else{
        printf("even parity\n");
    }

    return 0;
}

/*
Reading symbols from exe...done.
(gdb) b 21
Breakpoint 1 at 0x400525: file find_bit_parity.c, line 21.
(gdb) r
Starting program: /home/saif/programmer/Bitwise_Programs_in_C/exe 

Breakpoint 1, get_parity (num=99) at find_bit_parity.c:21
warning: Source file is more recent than executable.
21	        num = num & (num-1);     //Unset the right most set bits
(gdb) info locals
parity = true
(gdb) p num
$1 = 99
(gdb) p/t num
$2 = 1100011
(gdb) c
Continuing.

Breakpoint 1, get_parity (num=98) at find_bit_parity.c:21
21	        num = num & (num-1);     //Unset the right most set bits
(gdb) info locals
parity = false
(gdb) p num
$3 = 98
(gdb) p/t num
$4 = 1100010
(gdb) c
Continuing.

Breakpoint 1, get_parity (num=96) at find_bit_parity.c:21
21	        num = num & (num-1);     //Unset the right most set bits
(gdb) info locals
parity = true
(gdb) p num
$5 = 96
(gdb) p/t num
$6 = 1100000
(gdb) c
Continuing.

Breakpoint 1, get_parity (num=64) at find_bit_parity.c:21
21	        num = num & (num-1);     //Unset the right most set bits
(gdb) 
Continuing.
even parity
[Inferior 1 (process 6611) exited normally]
*/