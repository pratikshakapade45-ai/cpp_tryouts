#include<stdio.h>
void main()
{
	int n1,n2,digit,sum1=0,sum2=0;
	printf("enter the num\n");
	scanf("%d",&n1);
	while (n1>0)
	{
		digit=n1%10;
		sum1=sum1+digit;
		n1=n1/10;
	}
	{
		printf("the sum of the numbers is\n %d",sum1);
	}
	
	
	printf("\nenter the num\n");
	scanf("%d",&n2);
	while (n2>0)
	{
		digit=n2%10;
		sum2=sum2+digit;
		n2=n2/10;
	}
	{
		printf("the sum of the numbers is\n %d",sum2);
	}
	
	if(n1>n2)
	printf("sum of n1 is greater\n",n1);
	else
	printf("sum of n2 is greater\n",n2);
	
}
