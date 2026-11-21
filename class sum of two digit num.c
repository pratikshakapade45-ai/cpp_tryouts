#include<stdio.h>
void main()
{
	int num,quotient,remainder,sum;
	printf("enter any two digit num for sum\n");
	scanf("%d",&num);
	quotient=num/10;
	remainder=num%10;
	sum=quotient+remainder;
	printf("the sum of two digit num is %d",sum);
}
