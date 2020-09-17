#include<stdio.h>
//program to check the usage of comma operator
void main()
{
	int a,b,c,d,sum;
	sum=(a=1,b=2,b=3,d=4);
	printf("the sum is :");
	//it will print 4 as the output
	printf("%d",sum);
	printf("\n");
	//another sum
	int sum2=(a=3,b=4,a+b);
	printf("the sum is :");
	//it will print 7 as the output
	printf("%d",sum2);
}