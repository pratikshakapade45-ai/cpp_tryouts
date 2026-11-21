#include<stdio.h>
void main()
{
	int n,digit,sum=0;
	printf("enter the num\n");
	scanf("%d",&n);
	while (n>0)
	{
		digit=n%10;
		sum=sum-digit;
		n=n/10;
		
	}
	
	{
		printf("the sum of the numbers is\n %d",sum);
	}
	
}
