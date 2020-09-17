/*pgm to demonstrate the usage
of formal and actual arguments*/
#include<stdio.h>
int main()
{
	int a,b,c,actual_sum,sum1,sum2;
	actual_sum+=sum_1(1,2);
	printf("the actual sum is %d\n\n",actual_sum);
	sum1+=sum_1(1,2,3);
	//case 1 actual arguments > than formal args
	printf("in case 1 sum last_num will be ignored\n");
	printf("sum is : %d\n\n",sum1);	
	//case 2 formal args > than actual arguments
	sum2+=sum_2(a,b);
	printf("case 2 sum (garbage num) \n");
	printf("sum is : %d\n",sum2);
}
//case 1 func definition
int sum_1(a,b) {return a+b;}
//case 2 func definition
int sum_2(a,b,c) {return a+b+c;}
