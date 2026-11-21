#include<stdio.h>
void main()
{
	int num,quotient,remainder,sum,x,y;
	printf("enter anny three digit num\n");
	scanf("%d",&num);
	quotient=num/10;
	remainder=num%10;
	x=quotient/10;
	y=quotient%10;
	sum=remainder+x+y;
	printf("the sum of three digit num is %d\n",sum);
}
