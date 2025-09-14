/*
Add/subtract two numbers without using Arthematic operators.

*/
#include<stdio.h>

int add(int xVar,int yVar)
{
    while(yVar!=0)
    {
        //carry now contains common setbits of xVar AND yVar.
        int carry = xVar & yVar;

        xVar = xVar ^ yVar;

        yVar = carry << 1;
    }

    return xVar;
}


int subtract(int xVar,int yVar)
{
    while(yVar !=0)
    {
        //borrow contains common set bits of yVar and unset bits of xVar
        int borrow = (~xVar)&yVar;

        xVar = xVar ^ yVar;

        yVar = borrow << 1;
    }

    return xVar;
}


int main(void)
{
  int uX = add(41,23);

  int uY = subtract(45,21);

  printf("addition and subtraction of numbers \
without using arthematic operators  is %d & %d\n",uX,uY);

  return 0;
}