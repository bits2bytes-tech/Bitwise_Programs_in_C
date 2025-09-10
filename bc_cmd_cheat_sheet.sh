GNU bc Cheat Sheet


*bc is a command-line calculator and primitive language

*bc can only take expressions on standard input or in files, not directly on the command line. One way to do a bc one-liner is echo 3+4 | bc .


Basic Usage :

    Any alphanumeric variable name is allowed once it starts with a letter.

    There are 4 special variables
        last - The value of the last printed number
        scale - number of decimal places to display
        ibase - base to be used for input values
        obase - base to be used for output values

    Any expression that is not an assignment is displayed and stored in the last variable.

    Every value and every expression is a number. The assignment operator returns 0. Booleans are 0 / 1.

    Basic + - / * = == work. % is modulo . ^ is integer exponentiation.

    Predefined functions are :
        s - sine , c - cosine
        a - arctan , j(n,x) - Bessel function
        l - natural log , e - e to the power of
        length, scale, sqrt - as named

    && , || , ! work as expected (return 0 or 1).

Example 1 : Floating-Point Arithmetic

One of the advanced features of ‘bc’ is its ability to handle floating-point arithmetic. By default, ‘bc’ performs integer division. However, you can use the ‘scale’ variable to specify the number of decimal places you want in your result.

echo 'scale=2; 10 / 3' | bc

# Output:
# 3.33	

Example 2 :  Basic Arithmetic Operations

The ‘bc’ command in Linux is a powerful tool that can perform basic arithmetic operations, such as addition, subtraction, multiplication, and division, right in your terminal. Let’s try a few examples.

echo '25 * 4' | bc

# Output:
# 100

Example 3 :
 
The bc command can be used for arbitrary precision arithmetic, including base conversions.
Code

echo "obase=2; 10" | bc


Example 4 : Explanation: Convert Binary to Decimal. 

Input: $ echo "ibase=2;1111" | bc -l
Output: 15


