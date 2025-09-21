/*
 Find the log base 2 of an integer with the
  MSB N set in O(N) operations (the obvious way) 
*/

#include <stdio.h>

int main(void)
{
    unsigned int v = 55; // 32-bit word to find the log base 2 of
    unsigned int r = 0; // r will be lg(v)

    while (v >>= 1) // unroll for more speed...
    {
        r++;
    }

    printf("count the shift is %d\n",r);
}

/*
The log base 2 of an integer is the same as the position 
of the highest bit set (or most significant bit set, MSB). 

(gdb) p/t v
110111
(gdb) r
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: /home/saif/programmer/Bitwise_Programs_in_C/exe 

Breakpoint 1, main () at find_log_base_2.c:15
15	        r++;
(gdb) info local
v = 27
r = 0
(gdb) p/t v
$8 = 11011
(gdb) c
Continuing.

Breakpoint 1, main () at find_log_base_2.c:15
15	        r++;
(gdb) p/t v
$9 = 1101
(gdb) c
Continuing.

Breakpoint 1, main () at find_log_base_2.c:15
15	        r++;
(gdb) p/t v
$10 = 110
(gdb) c
Continuing.

Breakpoint 1, main () at find_log_base_2.c:15
15	        r++;
(gdb) p/t v
$11 = 11
(gdb) c
Continuing.

Breakpoint 1, main () at find_log_base_2.c:15
15	        r++;
(gdb) p/t v
$12 = 1
(gdb) c
Continuing.
[Inferior 1 (process 13375) exited normally]


Breakpoint 1, main () at find_log_base_2.c:15
15	        r++;
(gdb) p r
$1 = 5

*/

