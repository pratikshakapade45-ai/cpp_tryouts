#include<stdio.h>
void sum(int x);
void main()
{
	int num;
	printf("enter the num for sum of its digit num\n");
	scanf("%d",&num);
    sum(num);	
}
void sum(int x)
{
 int sum=0,remainder;
	while(x!=0)
	{
		remainder=x%10;
		sum=sum+remainder;
		x=x/10;
	}
printf("the sum of the digit is %d\n",sum);
}
