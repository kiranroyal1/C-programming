#include<stdio.h>
//program to demonstrate the usage of left shift and right shift
void main()
{
int x=5,
leftshi_x,
rightshi_x;
//first let's try with left shift
leftshi_x=5<<2;
/*mathematically it is equivalent to x*2^(y)
so it's 5*2^(2)= 20 */
printf("the value after left shifting 2 bits is: ");
printf("%d",leftshi_x);
//first let's try with right shift
printf("\n");
rightshi_x=5>>2;
/*mathematically it is equivalent to x/2^(y)
so it's 5/2^(2)= 2 (rem) */
printf("the value after right shifting 2 bits is: ");
printf("%d",rightshi_x);
}