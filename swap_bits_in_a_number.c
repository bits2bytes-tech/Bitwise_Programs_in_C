/*
Swap bits in a given Number


x = |        |A|           |B|                 |
              ^_____________^



X ---> Number
P1 --> first bit position
P2 --> second bit position
n --> no of bits to be swapped

We can compile it with gcc -g -o0  swap_bits_in_a_number.c -o ./exe

  * The -g flag compiles the program with debugging symbols, which is going to make it a lot easier to look at our variables.
  * -o0 tells gcc to turn off optimizations So that the variables won't get optimized out.

run or r - Executes the program from start to end.
break or b - Sets a breakpoint on a particular line. Ex: b main / b 19 (line number) / b spiral_matrix_gdb.c:19 /b _func_name_ 

disable - Disables a breakpoint
enable - Enables a disabled breakpoint.
next or n - Executes the next line of code without diving into functions.
step - Goes to the next instruction, diving into the function.
list or l - Displays the code, if code has > 10 lines , one need to use the list command multiple times.
print or p - Displays the value of a variable.
quit or q - Exits out of GDB.
clear - Clears all breakpoints.
continue or c - Continues normal execution
backtrace or bt - show the trace of where you are currently. which function you are in . print stack back trace.
                - optiontionally you can move the call stack using up and doen commands.
finish - Run till exit

inside a function , variation of the info command prints the arguments passed to that function
info args , info args , info locals , info stack , info regsters , frame 

print variable-name - Print value sorted in variable. Ex: p i

start gdb using ,

$ gdb ./exe

break and run , use the above commands to navigate through the code.

(gdb) b main / line number
(run) run

(gdb) p/t
(gdb) info local
(gdb) n
(gdb) n


*/

#include <stdio.h>

int main()
{
    unsigned int x , p1 , p2 , n ;

    x = 47;
    p1 = 1;
    p2 = 2;
    n = 3;

    printf("Given Number x = %d\n",x);

    unsigned int set_1 = (x>>p1) & ((1U<<n)-1);
    unsigned int set_2 = (x>>p2) & ((1U<<n)-1);

    unsigned int XOR = (set_1^set_2);
    XOR = (XOR << p1) | (XOR << p2);

    unsigned int Result = x ^ XOR;

    printf("Result = %d\n",Result);

    return 0;
}


/*
Reading symbols from exe...done.
(gdb) b 71
Breakpoint 1 at 0x40053a: file swap_bits_in_a_number.c, line 71.
(gdb) r
Starting program: /home/saif/programmer/Bitwise_Programs_in_C/exe 
Given Number x = 47

Breakpoint 1, main () at swap_bits_in_a_number.c:71
71	    unsigned int set_1 = (x>>p1) & ((1U<<n)-1);
(gdb) info local
x = 47
p1 = 1
p2 = 2
n = 3
set_1 = 4294958512
set_2 = 32767
XOR = 0
Result = 0
(gdb) n
72	    unsigned int set_2 = (x>>p2) & ((1U<<n)-1);
(gdb) 
74	    unsigned int XOR = (set_1^set_2);
(gdb) p/t set_1
$1 = 111
(gdb) p/t set_2
$2 = 11
(gdb) n
75	    XOR = (XOR << p1) | (XOR << p2);
(gdb) p/t XOR
$3 = 100
(gdb) n
77	    unsigned int Result = x ^ XOR;
(gdb) n
79	    printf("Result = %d\n",Result);
(gdb) p/t x
$4 = 101111
(gdb) p/t Result
$5 = 110111
(gdb) info locals
x = 47
p1 = 1
p2 = 2
n = 3
set_1 = 7
set_2 = 3
XOR = 24
Result = 55
(gdb) n
Result = 55
81	    return 0;
*/